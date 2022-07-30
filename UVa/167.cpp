#include <iostream>
#include <iomanip>
using namespace std;

int board[8][8], ans;
bool chess[8][8], column[8];

void playing(int n, int sum) { // n - 當前皇后的橫排
	if (n == 8) { // 排完了
		ans = max(sum, ans);
		return;
	}
	for (int i = 0; i < 8; i++) {  //枚舉每個直排看看能不能放
		if (column[i]) { //這一個直排已經有人放過了
			continue;
		}
		bool possible = true;
		for (int j = 1; j <= n; j++) { //往左上&右上檢查會不會打到
			if (i - j >= 0 && chess[n - j][i - j]) { //左上打到了
				possible = false;
				break;
			}
			if (i + j < 8 && chess[n - j][i + j]) { //右上打到了
				possible = false;
				break;
			}
		}
		if (possible) {
			chess[n][i] = true; //這個位置放了
			column[i] = true;  //這個直排放了
			playing (n + 1, sum + board[n][i]); //從下一橫排繼續枚舉
			chess[n][i] = false; //要把放過的拿起來
			column[i] = false;
		}
	}
	return;
}

int main() {
	int k;
	cin >> k;
	while (k--) {
		ans = 0;
		for (int i = 0; i < 8; i++) {
			column[i] = false;
			for (int j = 0; j < 8; j++) {
				chess[i][j] = false;
				cin >> board[i][j];
			}
		}
		for (int i = 0; i < 8; i++) {
			chess[0][i] = true;
			column[i] = true;
			playing(1, board[0][i]);
			chess[0][i] = false;
			column[i] = false;
		}
		cout << setw(5) << ans << '\n';
	}
	return 0;
}