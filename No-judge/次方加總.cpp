#include<iostream>
using namespace std;

int num[1000];

int times ( int a, int b ){
	if ( b == 0 ){
		num[0] = 1;
		return num[0];
	}
	else {
		num[b] = num[b - 1] * a;
		return num[b];
	}
}

int sum ( int a, int b ){
	if ( b == 0 ){
		return times ( a, b );
	}
	return sum ( a, b - 1 ) + times ( a, b );
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << sum ( a, b ) << '\n';
	return 0;
}
