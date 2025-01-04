// Atcoder abc387_b
// 2025-01-04

#include <iostream>
using namespace std;

const int MAXN = 10;


int main() {
    int X;
    scanf("%d", &X);
    int ans = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j != X) ans += i * j;
        }
    }
    printf("%d\n", ans);
    return 0;
}