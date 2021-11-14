#include<iostream>
using namespace std;

int num ( int n ){
	int times;
	for ( times = 0; n > 1; times++ ){
		if ( n % 2 == 0 ){
			n /= 2;
		}
		else {
			n = 3 * n + 1;
		}
	}
	return times + 1;
}

int main(){
	int i, j, most;
	while ( cin >> i >> j ) {
		cout << i << ' ' << j << ' ';
		if ( i > j ){
			swap ( i, j );
		}
		for ( int N = i; N <= j; N++ ){
			if ( N == i ){
				most = num ( N );
			}
			else if ( most < num ( N ) ){
				most = num( N );
			}
		}
		cout << most << '\n';
	}
	return 0;
}
