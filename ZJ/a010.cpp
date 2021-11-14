#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	bool the_first = true;
	int time = 0;
	for ( int i = 2; n > 1; i++ ){
		if ( n % i == 0 ){
			if ( !the_first && time == 0 ){
				cout << " * ";
			}
			if ( time == 0 ){
				cout << i;
			}
			time++;
			n /= i;
			i--;
			the_first = false;
		}
		else {
			if ( time > 1 ){
				cout << '^' << time;
				time = 0;
			}
		}
	}
	return 0;
}
