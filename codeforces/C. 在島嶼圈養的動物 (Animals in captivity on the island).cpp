// Problem: C. 在島嶼圈養的動物 (Animals in captivity on the island)
// Contest: Codeforces - Ten Point Round #10 (Div. 1 + Div. 2)
// URL: https://codeforces.com/group/H0qY3QmnOW/contest/329984/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

bool land[50][50];

int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> land[i][j];
		}
	}
	int length = 0, x = -1, y = -1; //length - 邊長, x, y - 座標
	for (int i = 0; i < n; i++){//從左上角開始看
		for (int j = 0; j < m; j++){
			for (int k = min (n - i, m - j); k >= 3; k--){//枚舉邊長?
				bool possible = true;
				for (int checkx = i; checkx < i + k; checkx++){
					for (int checky = j; checky < j + k; checky++){ //檢查是否有海水
						if (!land[checkx][checky]){
							possible = false;
							break;
						}
					}
					if (!possible){
						break;
					}
				}
				if (possible){
					if (length < k){
						x = i;
						y = j;
						length = k;
					}
				}
			}
		}
	}
	if (x == -1 || y == -1){
		cout << "IMPOSSIBLE\n";
	}
	else {
		cout << "YES\n";
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (j != 0){
					cout << ' ';
				}
				if (((i == x || i == x + length - 1) && j >= y && j < y + length) || (i < x + length && i >= x && (j == y || j == y + length - 1))){
					cout << 2;
				}
				else {
					cout << land[i][j];
				}
			}
			cout << '\n';
		}
	}
	return 0;
}