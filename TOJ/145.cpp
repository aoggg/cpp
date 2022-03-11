#include<iostream>
using namespace std;

int paper[1002][1002], total[1002][1002];

int main(){
	int n, m, k, q;
	cin >> n >> m >> k >> q;
	for (int i = 0; i < k; i++){
		int x, y;
		cin >> x >> y;
		paper[x + 1][y + 1]++;
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			total[i][j] = total[i - 1][j] + total[i][j - 1] - total[i - 1][j - 1] + paper[i][j];
		}
	}
	for (int i = 0; i < q; i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << total[x2 + 1][y2 + 1] - total[x1][y2 + 1] - total[x2 + 1][y1] + total[x1][y1] << '\n';
	}
	return 0;
}
