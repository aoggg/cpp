#include<iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	for ( int i = 0; i < N; i++ ){
		for ( int j = N - 1; j > i; j-- ){
			cout << ' ';
		}
		for ( int j = 0; j <= i; j++ ){
			cout << ( char )( 'A' + j );
		}
		cout << '\n';
	}
	for ( int i = N - 2; i >= 0; i-- ){
		for ( int j = N - 1; j > i; j-- ){
			cout << ' ';
		}
		for ( int j = 0; j <= i; j++ ){
			cout << ( char )( 'A' + j );
		}
		cout << '\n';
	}
	return 0;
}
