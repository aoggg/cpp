#include<iostream>
using namespace std;

long long money[1002][1002], total[1002][1002];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int time = 0; time < n; time++){
		int x, y, k;
		cin >> x >> y >> k;
		money[x + 1][y + 1] += k;
	}
	for (int i = 1; i <= 1001; i++){
		for (int j = 1; j <= 1001; j++){
			total[i][j] = total[i - 1][j] + total[i][j - 1] - total[i - 1][j - 1] + money[i][j];
		}
	}
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << total[x2 + 1][y2 + 1] - total[x1][y2 + 1] - total[x2 + 1][y1] + total[x1][y1] << '\n';
	}
	return 0;
}
