#include<iostream>
using namespace std;

int main(){
	int n, m, ans = 0;
	cin >> n >> m;
	for ( int i = 1; i <= m; i++ ){
		for ( int j = 1; j <= m; j++ ){
			for ( int k = 1; k <= m; k++ ){
				if ( i + j + k == n ){
					ans++;
				}
			}
		} 
	}
	cout << "ans: " << ans << '\n';
	return 0;
}
