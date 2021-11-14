#include<iostream>
using namespace std;

string dungeon[65];
const string DIR = "NWSE";
int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};

int main(){
	int N;
	cin >> N;
	for ( int times = 0; times < N; times++ ){
		if ( times != 0 ){
			cout << '\n';
		}
		int a, b;
		cin >> a >> b;
		getline ( cin, dungeon[0] );
		for ( int i = 0; i < a; i++ ){
			getline ( cin, dungeon[i] );
		}
		int x, y, face = 0;
		cin >> x >> y;
		x--;
		y--;
		char cmd;
		while ( cin >> cmd ){
			if ( cmd == 'Q' ){
				break;
			}
			else if ( cmd == 'R' ){
				face = ( face + 3 ) & 3;
			}
			else if ( cmd == 'L' ){
				face = ( face + 1 ) & 3;
			}
			else {
				int nx, ny;
				nx = x + dx[face];
				ny = y + dy[face];
				if ( dungeon[nx][ny] != '*' && nx < a && ny << b){
					x = nx;
					y = ny;
				}
			}
		}
		cout << x + 1 << ' ' << y + 1 << ' ' << DIR[face] << '\n';
	}
	return 0;
}
