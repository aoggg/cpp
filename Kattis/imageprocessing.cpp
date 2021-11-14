#include<iostream>
using namespace std;

int image[25][25], kernel[25][25], result[25][25];

int main(){
	int H, W, N, M;
	cin >> H >> W >> N >> M;
	for ( int i = 0; i < H; i++ ){
		for ( int j = 0; j < W; j++ ){
			cin >> image[i][j];
		}
	}
	for ( int i = 0; i < N; i++ ){
		for ( int j = 0; j < M; j++ ){
			cin >> kernel[i][j];
		}
	}
	for ( int i = 0; i < H - N + 1; i++ ){
		for ( int j = 0; j < W - M + 1; j++ ){
			for ( int k = i; k < i + N; k++ ){
				for ( int l = j; l < j + M; l++ ){
					result[i][j] += image[k][l] * kernel[N - ( k - i ) - 1][M - ( l - j ) - 1];
				}
			}
		}
	}
	for ( int i = 0; i < H - N + 1; i++ ){
		for ( int j = 0; j < W - M + 1; j++ ){
			cout << result[i][j];
			if ( j != W - M ){
				cout << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
