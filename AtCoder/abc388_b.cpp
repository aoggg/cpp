// Atcoder abc388_b
// 2025-01-11

#include <iostream>
using namespace std;

const int MAXN = 105;

int main() {
    int N, D;
    scanf("%d%d", &N, &D);
    int T[MAXN], L[MAXN];
    for (int i = 0; i < N; i++) scanf("%d%d", T + i, L + i);
    for (int i = 1; i <= D; i++) {
        int ans = T[0] * (L[0] + i);
        for (int j = 1; j < N; j++) ans = max(ans, T[j] * (L[j] + i));
        printf("%d\n", ans);
    }
    return 0;
}