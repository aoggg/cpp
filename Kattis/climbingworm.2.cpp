#include<iostream>
using namespace std;

int main(){
	int a, b, h, day;
	cin >> a >> b >> h;
	h -= a;
	if ( h <= 0 ){
		day = 0;
	}
	else{
		day = h / ( a - b );
		if ( h % ( a - b) != 0 ){
			day++;
		}
	}
	cout << day + 1 << '\n';
	return 0;
}
