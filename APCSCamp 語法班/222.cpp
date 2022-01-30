#include<iostream>
#include "lib0222.h"
using namespace std;

void mat_mul (int n, int m, int k, int mat1[][1000], int mat2[][1000], int result[][1000]){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < k; j++){
			result[i][j] = 0;
			for (int l = 0; l < m; l++){
				result[i][j] += mat1[i][l] * mat2[l][j];
			}
		}
	}
}
