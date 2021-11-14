#include<iostream>
using namespace std;

string received;
char matrix[100][100];

int main(){
	cin >> received;
	int R = 0, C = 0;
	for ( int i = 1; i <= received.size(); i++ ){
		if ( R < i && i <= received.size() / i && received.size() % i == 0 ){
			R = i;
			C = received.size() / i;
		}
	}
	for ( int i = 0; i < C; i++ ){
		for ( int j = 0; j < R; j++ ){
			matrix[i][j] = received[i * R + j];
		}
	}
	for ( int i = 0; i < R; i++ ){
		for ( int j = 0; j < C; j++ ){
			cout << matrix[j][i];
		}
	}
	cout << '\n';
	return 0;
}
