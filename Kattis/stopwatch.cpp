#include<iostream>
using namespace std;

int main(){
	int N, ans = 0;
	cin >> N;
	bool is_stop = true;
	int before = 0, now = 0;
	for ( int i = 1; i <= N; i++){
		int t;
		cin >> t;
		is_stop = !is_stop;
		before = now;
		now = t;
		if ( is_stop ){
			ans += now - before;
		}
	}
	if ( !is_stop ){
		cout << "still running\n";
	}
	else{
		cout << ans << '\n';
	}
	return 0;
}
