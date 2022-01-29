#include<iostream>
using namespace std;

int colour[50][50][3], rgb[3];
bool is_TRN[50][50];

void turn (int n, int m, int x, int y, int d){
	for (int i = 0; i <= d; i++){
		for (int j = 0; j <= d - i; j++){
			if (x + i < n && y + j < m){
				is_TRN[x + i][y + j] = true;
			}
			if (x + i < n && y - j >= 0){
				is_TRN[x + i][y - j] = true;
			}
			if (x - i >= 0 && y + j < m){
				is_TRN[x - i][y + j] = true;
			}
			if (x - i >= 0 && y - j >= 0){
				is_TRN[x - i][y - j] = true;
			}
		}
	}
}

int main(){
	int n, m, d;
	cin >> n >> m >> d;
	for(int i = 0; i < 3; i++){
		cin >> rgb[i];
	}
	for (int i = 0; i < 3; i++){ //0 - r; 1 - g; 2 - b;
		for (int j = 0; j < n; j++){
			for (int k = 0; k < m; k++){
				cin >> colour[j][k][i];
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			bool same = true;
			for (int k = 0; k < 3; k++){
				if (colour[i][j][k] != rgb[k]){
					break;
				}
				if (k == 2){
					is_TRN[i][j] = true;
					turn(n, m, i, j, d);
				}
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << is_TRN[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
