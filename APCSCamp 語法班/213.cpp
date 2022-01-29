#include<iostream>
using namespace std;

bool nmk[50][50][50];
const int MX[] = {1, -1, 0, 0, 0, 0}, MY[] = {0, 0, 1, -1, 0, 0}, MZ[] = {0, 0, 0, 0, 1, -1};

int main(){
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			for (int l = 0; l < k; l++){
				cin >> nmk[i][j][l];
			}
		}
	}
	int x = 0, y = 0, z = 0;
	int nx, ny, nz;
	bool can_walk = true;
	while (can_walk){
		can_walk = false;
		for (int i = 0; i < 6; i++){
			nx = x + MX[i];
			ny = y + MY[i];
			nz = z + MZ[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= k){
				continue;
			}
			else if (!nmk[nx][ny][nz]){
				can_walk = true;
				nmk[nx][ny][nz] = true;
				x = nx;
				y = ny;
				z = nz;
				break;
			}
		}
	}
	cout << x << ' ' << y << ' ' << z << '\n';
	return 0;
}
