#include<iostream>
using namespace std;

string shortest, s, crosswords[25];

int main(){
	int R, C;
	cin >> R >> C;
	// bool first = true;
	for ( int i = 0; i < R; i++ ){
		cin >> crosswords[i];
	}
	shortest.resize(32, 'z');
	for ( int i = 0; i < R; i++ ){
		for ( int j = 0, k; j < C; j = k + 1 ){
			s = "";
			for ( k = j; k < C && crosswords[i][k] != '#'; k++ ){
				s += crosswords[i][k];
			}
			if ( s.size() > 1 ){
//				if ( first ){
//					shortest = s;
//					first = false;
//				}
//				else if ( s < shortest ){
//					shortest = s;
//				}
				if ( s < shortest ){
					shortest = s;
				}
			}
		}
	}
	for ( int i = 0; i < C; i++ ){
		for ( int j = 0, k; j < R; j = k + 1 ){
			s = "";
			for ( k = j; k < R && crosswords[k][i] != '#'; k++ ){
				s += crosswords[k][i];
			}
			if ( s.size() > 1 && s < shortest ){
				shortest = s;
			}
		}
	}
	cout << shortest << '\n';
	return 0;
}
