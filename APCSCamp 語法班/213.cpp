#include<iostream>
using namespace std;

bool nmk[55][55][55];
const int MX[] = {0, 0, 0, 0, 1, -1}, MY[] = {0, -1, 0, 1, 0, 0}, MZ[] = {1, 0, -1, 0, 0, 0};

int main(){
	int n, m, k;// n - x, m - y, k - z;
	cin >> n >> m >> k;
	for ( int i = 0; i < n; i++ ){
		for ( int j = 0; j < m; j++ ){
			for ( int l = 0; l < k; l++ ){
				cin >> nmk[i][j][l];
			}
		}
	}
	bool can_walk = true;
	int x = 0, y = 0, z = 0, nx, ny, nz;
	while ( can_walk ){
		can_walk = false;
		for ( int i = 0; i < 6; i++ ){
			nx = x + MX[i];
			ny = y + MY[i];
			nz = z + MZ[i];
			cout << '*' << nx << ' ' << ny << ' ' << nz << '\n';
			if ( nx < 0 || nx == n || ny < 0 || ny == m || nz < 0 || nz == k ){
				continue;
			}
			if ( !nmk[x][y][z] ){
				can_walk = true;
				nmk[x][y][z] = true;
				x = nx;
				y = ny;
				z = nz;
				break;
			}
		}
		cout << ' ' << x << ' ' << y << ' ' << z << '\n';
	}
	cout << x << ' ' << y << ' ' << z << '\n';
	return 0;
}
