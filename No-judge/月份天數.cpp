#include<iostream>
using namespace std;

int month[12];

int main(){
	for ( int i = 1; i <= 12; i++ ){
		if ( i == 2 ){
			month[i - 1] = 28;
		}
		else {
			if ( i <= 7 ){
				if ( i % 2 == 1 ){
					month[i - 1] = 31;
				}
				else {
					month[i - 1] = 30;
				}
			}
			else {
				if ( i % 2 == 1 ){
					month[i - 1] = 30;
				}
				else{
					month[i - 1] = 31;
				}
			}
		}
	}
	int n;
	cin >> n;
	cout << month[n - 1] << '\n';
	return 0;
}
