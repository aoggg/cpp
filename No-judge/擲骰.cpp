#include<iostream>
using namespace std;

int dice ( int a, int b, int c ){
	if ( a == 0 ){
		if ( c == 0 ){
			return 1;
		}
		else {
			return 0;
		}
	}
	int way = 0;
	for ( int i = 1; i <= b; i++ ){
		way += dice ( a - 1, b, c - i );
	}
	return way;
}

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << dice ( a, b, c ) << '\n';
	return 0;
}
