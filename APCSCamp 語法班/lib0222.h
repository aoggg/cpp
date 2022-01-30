#ifndef FUNCTION08_H_
#define FUNCTION08_H_

#include <stdio.h>

void mat_mul(int n, int m, int k, int mat1[][1000], int mat2[][1000], int result[][1000]);

int main() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int mat1[1000][1000], mat2[1000][1000], result[1000][1000];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    mat_mul(n, m, k, mat1, mat2, result);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d%c", result[i][j], " \n"[j == k-1]);
        }
    }
    return 0;
}
#endif // FUNCTION08_H_

