#include<iostream>
using namespace std;

string s_instr[55];
int instr[55];

const string COMMAND[] = {"Forward", "Left", "Right"};
const int MX[] = {0, 1, 0, -1}, MY[] = {1, 0, -1, 0}; 
// DIR = NESW

int main(){
	int tx, ty, n;
	cin >> tx >> ty >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> s_instr[i];
	}
	for ( int i = 0; i < n; i++ ){
		for ( int j = 0; j < 3; j++ ){
			if ( COMMAND[j] == s_instr[i] ){
				instr[i] = j;
			}
		}
	}
	bool find = false;
	int ans = 0;
	string right;
	for ( int i = 0; i < n && !find; i++ ){
		int changed = instr[i];
		for ( int j = 0; j < 2; j++ ){
			int x = 0, y = 0, face = 0;
			instr[i] = ( instr[i] + 1 ) % 3;
			for ( int k = 0; k < n; k++ ){
				if ( instr[k] == 0 ){
					x += MX[face];
					y += MY[face];
				}
				else if ( instr[k] == 1 ){
					face = ( face + 3 ) & 3;
				}
				else {
					face = ( face + 1 ) & 3;
				}
			}
			if ( x == tx && y == ty ){
				find = true;
				ans = i + 1;
				right = COMMAND[instr[i]];
				break;
			}
		}
		instr[i] = changed;
	}
	cout << ans << ' ' << right << '\n';
	return 0;
}
