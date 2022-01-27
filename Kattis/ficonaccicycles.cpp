#include<iostream>
using namespace std;

int fnum[2000];

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
			for ( int j = 2; j < i; j++ ){
				if ( fnum[i] == fnum[j] ){
					repeat = true;
					ans = j;
					break;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

