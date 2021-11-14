#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for ( int i = 1; i <= n; i++ ){
		for ( int j = 1; j <= n; j++ ){
			cout << j << 'x' << i << " = " << i * j;
			if ( j != n ){
				cout << ", ";
			}
		}
		cout << '\n';
	}
	return 0;
}
