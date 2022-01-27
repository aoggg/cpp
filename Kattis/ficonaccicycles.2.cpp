#include<iostream>
using namespace std;

int fnum[2000], appeared[500][1001];

int main(){
	int Q;
	cin >> Q;
	for ( int times = 0; times < Q; times++ ){
		bool repeat = false;
		int k, ans;
		cin >> k;
		fnum[0] = 1;
		fnum[1] = 1;
		for ( int i = 2; !repeat; i++ ){
			fnum[i] = ( fnum[i - 1] % k + fnum[i - 2] % k ) % k;
			if ( appeared[times][fnum[i]] >= 2 ){
				ans = appeared[times][fnum[i]];
				repeat = true;
				break;
			}
			appeared[times][fnum[i]] = i; 
		}
		cout << ans << '\n';
	}
	return 0;
}
