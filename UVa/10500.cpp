#include<iostream>
using namespace std;

char rmap[15][15], map[15][15];
bool visited[15][15];

int main(){
	int N, M;
	while ( cin >> N >> M ){
		if ( N == 0 && M == 0 ){
			break;
		}
		for ( int i = 0; i < N; i++ ){
			for ( int j = 0; j < M; j++ ){
				rmap[i][j] = '?';
				visited[i][j] = false;
			}
		}
		int x_ini, y_ini;
		cin >> x_ini >> y_ini;
		x_ini--;
		y_ini--;
		for ( int i = 0; i < N; i++ ){
			for ( int j = 0; j < M; j++ ){
				cin >> map[i][j];
			}
		}
		rmap[x_ini][y_ini] = map[x_ini][y_ini];
		visited[x_ini][y_ini] = true;
		bool moved;
		int movement = 0;
		do {
			if ( x_ini != N ){
				rmap[x_ini + 1][y_ini] = map[x_ini + 1][y_ini];
			}
			if ( x_ini != 0 ){
				rmap[x_ini - 1][y_ini] = map[x_ini - 1][y_ini];
			}
			if ( y_ini != M ){
				rmap[x_ini][y_ini + 1] = map[x_ini][y_ini + 1];
			}
			if ( y_ini != 0 ){
				rmap[x_ini][y_ini - 1] = map[x_ini][y_ini - 1];
			}
			moved = false;
			if ( x_ini != 0 && rmap[x_ini - 1][y_ini] == '0' && !visited[x_ini - 1][y_ini] ){
				x_ini--;
				moved = true;
			}
			if ( y_ini != M && rmap[x_ini][y_ini + 1] == '0' && !visited[x_ini][y_ini + 1] && !moved ){
				y_ini++;
				moved = true;
			}
			if ( x_ini != N && rmap[x_ini + 1][y_ini] == '0' && !visited[x_ini + 1][y_ini] && !moved ){
				x_ini++;
				moved = true;
			}
			if ( y_ini != 0 && rmap[x_ini][y_ini - 1] == '0' && !visited[x_ini][y_ini - 1] && !moved ){
				y_ini--;
				moved = true;
			}
			if ( moved ){
				visited[x_ini][y_ini] = true;
				movement++;
			}
		} while ( moved );
		cout << '\n';
		for ( int i = 0; i < N; i++ ){
			for ( int j = 0; j < M; j++ ){
				cout << "|---";
			}
			cout << "|\n";
			for ( int j = 0; j < M; j++ ){
				cout << "| " << rmap[i][j] << ' ';
			}
			cout << "|\n";
		}
		for ( int i = 0; i < M; i++ ){
			cout << "|---";
		}
		cout << "|\n\n";
		cout << "NUMBER OF MOVEMENTS: " << movement << '\n';
	}
	return 0;
}
