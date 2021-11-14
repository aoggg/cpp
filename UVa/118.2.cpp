#include<iostream>
using namespace std;

int tbl[128];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
bool scent[55][55];
string command;

const string DIR = "ENWS";

int main(){
	int right, top;
	cin >> right >> top;
	int x, y;
	int face;
	char face_input;
	for (int i=0; i<4; i++){
		tbl[DIR[i]] = i;
	}
	while ( cin >> x >> y >> face_input >> command){
		int nx, ny;
		face = tbl[face_input];
		bool is_lost = false;
		for ( int i = 0; i < command.size(); i++ ){
			if ( command[i] == 'L' ){
				face = (face+1) % 4;
			}
			else if ( command[i] == 'R' ){
				face = (face+3) % 4;
			}
			else {
				nx = x + dx[face];
				ny = y + dy[face];
				if (nx < 0 || nx > right || ny < 0 || ny > top){
					if (!scent[x][y]){
						scent[x][y] = true;
						is_lost = true;
						break;
					}
				}
				else{
					x = nx;
					y = ny;
				}
			}
		}
		cout << x << ' ' << y << ' ' << DIR[face];
		if ( is_lost ){
			cout << " LOST\n";
		}
		else{
			cout << '\n';
		}
	}
	return 0;
}
