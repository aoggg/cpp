#include<iostream>
using namespace std;

int counter ( int a, int b ){
	if ( a == 0 ){
		return 0;
	}
	return 1 + counter ( a / b, b );
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << counter ( a, b ) << '\n';
	return 0;
}
