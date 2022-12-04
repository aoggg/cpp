// Problem: B. 喳喳老師發餅乾 (Teacher Peggy Send Cookies)
// Contest: Codeforces - Ten Point Round #18 (Div. 3) TEST
// URL: https://codeforces.com/group/E1FstFkHSb/contest/376401/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int N, K, T; // N -> 學生, K -> cookieeeeeee
	cin >> N >> K >> T;
	int basic = K / N;
	if ((K / N) % 2 == 0){
		if (T > K % N){
			cout << basic << '\n';
		}
		else {
			cout << basic + 1 << '\n';
		}
	}
	else {
		if (T <= N - K % N){
			cout << basic << '\n';
		}
		else {
			cout << basic + 1 << '\n';
		}
	}
	return 0;
}