#include<iostream>
using namespace std;

const string FLOWER = "ROYGBIPLW";

string garden[9], ans[9];

bool check (int column, int row, char flower){ //判斷
	bool not_appeared = true;
	for (int i = 0; i < 9; i++){
		if ((ans[i][row] == flower && i != column) || (ans[column][i] == flower && i != row)){
			not_appeared = false;
			break;
		}
	}
	for (int i = 3 * (column / 3); i < 3 * (column / 3 + 1); i++){
		for (int j = 3 * (row / 3); j < 3 * (row / 3 + 1); j++){
			if (ans[i][j] == flower && (i != column || j != row)){
				not_appeared = false;
				break;
			}
		}
	}
	return not_appeared;
}

void filling (int column, int row){ //一排一排比下去
	if (column == 9){ // 跑到底ㄌ
		for (int i = 0; i < 9; i++){
			for (int j = 0; j < 9; j++){
				if (garden[i][j] == '*'){ // 跟原本的比較 原本是*代表是新填上去ㄉ
					cout << ans[i][j];
				}
			}
			cout << '\n';
		}
		return ;
	}
	if (row == 9) { // 走到底了 換下一排
		filling (column + 1, 0);
		return ;
	}
	if (garden[column][row] != '*'){ // 原本就已經有種花了 往下一格繼續看
		filling (column, row + 1);
		return ;
	}
	for (int i = 0; i < 9; i++){ // 枚舉每個可能?
		if (check (column, row, FLOWER[i])){ // 是殼以ㄉ 繼續往下跑
			ans[column][row] = FLOWER[i];
			filling (column, row + 1);
			ans[column][row] = '*';
		}
	}
	return ;
}

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	for (int i = 0; i < 9; i++){
		cin >> garden[i];
		ans[i] = garden[i];
	}
	filling (0, 0);
	return 0;
}