#include<iostream>
#include<queue>
#include<utility>
using namespace std;

bool tube[100][100];
int step[100][100];

const int mx[4] = {0, 1, 0, -1}, my[4] = {1, 0, -1, 0};


int main(){
	int S;
	for (int cases = 1; cin >> S; cases++){
		cout << "Case " << cases << ":\n";
		queue <pair <int, int>> passed;
		int N, M;
		cin >> N >> M;
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				cin >> tube[i][j];
				if (i == 0 && tube[i][j]){
					step[i][j] = 1;
					passed.push ({i, j});
				}
			}
		}
		while (passed.size() != 0){
			int x = passed.front().first, y = passed.front().second; //現在的位置
			passed.pop(); //把現在這個點刪掉
			int nx, ny; //移動後的位置
			for (int i = 0; i < 5 - S; i++){
				nx = x + mx[i];
				ny = y + my[i];
				if (nx >= 0 && nx < N && ny >= 0 && ny < M && tube[nx][ny] && step[nx][ny] == 0){ // 沒有出界而且那邊有管子且沒有被走過
					passed.push ({nx, ny});
					step[nx][ny] = step[x][y] + 1;
				}
			}
		}
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				if (j != 0){
					cout << ' ';
				}
				cout << step[i][j];
				step[i][j] = 0;
			}
			cout << '\n';
		}
	}
	return 0;
}