#include<iostream>
using namespace std;

bool scent[55][55];
string command;

const string DIR = "ENWSEN";

int main(){
	int right, top;
	cin >> right >> top;
	int x, y;
	char face;
	while ( cin >> x >> y >> face >> command){
		bool is_lost = false;
		for ( int i = 0; i < command.size(); i++ ){
			if ( command[i] == 'L' ){
				for ( int j = 1; j <= 4; j++ ){
					if ( face == DIR[j] ){
						face = DIR[j + 1];
						break;
					}
				}
			}
			else if ( command[i] == 'R' ){
				for ( int j = 1; j <= 4; j++ ){
					if ( face == DIR[j] ){
						face = DIR[j - 1];
						break;
					}
				}
			}
			else {
				if ( face == 'W' ){
					if ( x == 0 && !scent[x][y] ){
						scent[x][y] = true;
						is_lost = true;
						break;
					}
					else if ( x != 0 ){
					x--;
					}
				}
				else if ( face == 'E' ){
					if ( x == right && !scent[x][y] ){
						scent[x][y] = true;
						is_lost = true;
						break;
					}
					else if ( x != right ){
						x++;
					}
				}
				else if ( face == 'S' ){
					if ( y == 0 && !scent[x][y] ){
						scent[x][y] = true;
						is_lost = true;
						break;
					}
					else if ( y != 0 ){
						y--;
					}
				}
				else {
					if ( y == top && !scent[x][y] ){
						scent[x][y] = true;
						is_lost = true;
						break;
					}
					else if ( y != top ){
						y++;
					}
				}
			}
		}
		cout << x << ' ' << y << ' ' << face;
		if ( is_lost ){
			cout << " LOST\n";
		}
		else{
			cout << '\n';
		}
	}
	return 0;
}
