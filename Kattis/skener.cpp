#include<iostream>
using namespace std;

string article[55];

int main(){
	int R, C, Zr, Zc;
	cin >> R >> C >> Zr >> Zc;
	for ( int i = 0; i < R; i++ ){
		cin >> article[i];
	}
	for ( int i = 0; i < R; i++ ){
		for ( int j = 0; j < Zr; j++ ){
			for ( int k = 0; k < C; k++ ){
				for ( int l = 0; l < Zc; l++ ){
					cout << article[i][k];
				}
			}
			cout << '\n';
		}
	}
	return 0;
}
