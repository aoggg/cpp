// Problem: H. 線段交點數量 (Number of line segment intersections)
// Contest: Codeforces - Ten Point Round #18 (Div. 3) TEST
// URL: https://codeforces.com/group/E1FstFkHSb/contest/376401/problem/H
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<map>
using namespace std;

map <int, int> spot, total;

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int N, M, l = 1e6, r = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		spot[x1]++;
		spot[x2 + 1]--;
		r = max (r, x2);
		l = min (l, x1);
	}
	for (int i = l; i <= r; i++){
		total[i] = total[i - 1] + spot[i];
	}
	for (int i = 0; i < M; i++){
		int ask;
		cin >> ask;
		if (i != 0){
			cout << ' ';
		}
		cout << total[ask];
	}
	cout << '\n';
	return 0;
}