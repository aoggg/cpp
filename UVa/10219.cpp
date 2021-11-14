#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, k;
	while ( cin >> n >> k ){
		long double ans = 0;
		for ( int i = 1; i <= n; i++ ){
			ans += log10 ( i );
		}
		for ( int i = 1; i <= k; i++ ){
			ans -= log10 ( i );
		}
		for ( int i = 1; i <= n - k; i++ ){
			ans -= log10 ( i );
		}
		cout << (int)ans + 1 << '\n';
	}
	return 0;
}

