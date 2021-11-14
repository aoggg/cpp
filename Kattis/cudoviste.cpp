#include<iostream>
using namespace std;

char map[55][55];
int car[5];

int main(){
	int R, C;
	cin >> R >> C;
	for ( int i = 0; i < R; i++ ){
		for ( int j = 0; j < C; j++ ){
			cin >> map[i][j];
		}
	}
	for ( int i = 0; i < R - 1; i++ ){
		for ( int j = 0; j < C - 1; j++ ){
			if ( map[i][j] != '#' && map[i][j + 1] != '#' && map[i + 1][j] != '#' && map[i + 1][j + 1] != '#' ){
				int cars = 0; 
				for ( int i1 = i; i1 <= i + 1; i1++ ){
					for ( int j1 = j; j1 <= j + 1; j1++ ){
						if ( map[i1][j1] == 'X' ){
							cars++;
						}
					}
				}
				car[cars]++;
			}
		}
	}
	for ( int i = 0; i < 5; i++ ){
		cout << car[i] << '\n';
	}
	return 0;
}
