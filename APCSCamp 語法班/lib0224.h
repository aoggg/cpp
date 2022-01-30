#ifndef FUNCTION10_H_
#define FUNCTION10_H_

#include <stdio.h>
#include <stdlib.h>

void calc_bombs(int n, int m, bool **is_bomb, int **count);

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int *count[n];
    bool *is_bomb[n];
    for (int i = 0; i < n; i++) {
        is_bomb[i] = (bool*) malloc(sizeof(bool)*m);
        count[i] = (int*) malloc(sizeof(int)*m);
        for (int j = 0; j < m; j++) {
            scanf("%d", &is_bomb[i][j]);
        }
    }

    calc_bombs(n, m, is_bomb, count);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d%c", count[i][j], " \n"[j+1 == m]);
        }
    }
    return 0;
}
#endif // FUNCTION10_H_

