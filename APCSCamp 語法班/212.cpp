#include<iostream>
using namespace std;

struct info {
	int x, y, num;
};

bool visited[105][105];
int mn[105][105];

const int MX[] = {1, 0, -1, 0}, MY[] = {0, 1, 0, -1};

bool can_walk (int x, int y, int m, int n ){
	return ( y - 1 >= 0 && !visited[x][y - 1] ) || ( y + 1 < n && !visited[x][y + 1] ) || ( x - 1 >= 0 && !visited[x - 1][y] ) || ( x + 1 < m && !visited[x + 1][y] );
}

int main(){
	int m, n;
	cin >> m >> n;
	info smallest;
	for ( int i = 0; i < m; i++ ){
		for ( int j = 0; j < n; j++ ){
			cin >> mn[i][j];
			if ( ( i == 0 && j == 0 ) || mn[i][j] < smallest.num ){
				smallest.x = i;
				smallest.y = j;
				smallest.num = mn[i][j];
			}
		}
	}
	visited[smallest.x][smallest.y] = true;
	//smallest - 最小值的位置owo
	int sum = smallest.num;
	while ( can_walk ( smallest.x, smallest.y, m, n ) ){
		int x = smallest.x, y = smallest.y, nx, ny;
		info smaller;
		smaller.num = 100001;
		for ( int i = 0; i < 4; i++ ){
			nx = x + MX[i];
			ny = y + MY[i];
			if ( nx < 0 || ny < 0 || nx == m || ny == n ){
				continue;
			}
			if ( !visited[nx][ny] && mn[nx][ny] < smaller.num ){
				smaller.x = nx;
				smaller.y = ny;
				smaller.num = mn[nx][ny];
			}
		}
		visited[smaller.x][smaller.y] = true;
		smallest = smaller;
		sum += smallest.num;
	}
	cout << sum << '\n';
	return 0;
}
