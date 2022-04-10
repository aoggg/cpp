// Problem: D. 圖論初體驗 (First Graph Theory)
// Contest: Codeforces - Ten Point Round #18 (Div. 3) TEST
// URL: https://codeforces.com/group/E1FstFkHSb/contest/376401/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<map>
using namespace std;

map <int, int> in, out;

int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		out[a]++;
		in[b]++;
	}
	for (int i = 1; i <= n; i++){
		if (i != 1){
			cout << ' ';
		}
		cout << out[i];
	}
	cout << '\n';
	for (int i = 1; i <= n; i++){
		if (i != 1){
			cout << ' ';
		}
		cout << in[i];
	}
	cout << '\n';
	for (int i = 1; i <= n; i++){
		if (i != 1){
			cout << ' ';
		}
		cout << in[i] + out[i];
	}
	cout << '\n';
	return 0;
}