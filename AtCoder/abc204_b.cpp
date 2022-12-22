#include<iostream>
using namespace std;

int main(){
	int N, ans = 0;
	cin >> N;
	for ( int i = 1; i <= N; i++){
		int A;
		cin >> A;
		if ( A > 10 ){
			ans += A - 10;
		}
	}
	cout << ans << '\n';
	return 0;
}
