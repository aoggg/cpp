#include<iostream>
#include "lib0224.h"
using namespace std;

const int MX[] = {1, -1, 0, 0, 1, 1, -1, -1}, MY[] = {0, 0, 1, -1, 1, -1, 1, -1};

void calc_bombs (int n, int m, bool **is_bomb, int **count){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (is_bomb[i][j]){
				count[i][j] = -1;
				continue;
			}
			for (int k = 0; k < 8; k++){
				int nx = i + MX[k];
				int ny = j + MY[k];
				if (nx >= 0 && nx < n && ny >= 0 && ny < m && is_bomb[nx][ny]){
					count[i][j]++;
				}
			}
		}
	}
}
