// CSDC OJ 294
// 2025-01-08

#include <iostream>
using namespace std;

const int MAXN = 1e3 + 5;

int main() {
    int n;
    scanf("%d", &n);
    int ans[MAXN];
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int k;
        scanf("%d", &k);
        if (k > n / 2) {
            ans[total] = i;
            total++;
        }
    }
    printf("%d\n", total);
    if (total != 0) {
        for (int i = 0; i < total; i++) {
            if (i != 0) printf(" ");
            printf("%d", ans[i]);
        }
        puts("");
    }
    if (total == 0) puts("0");
    return 0;
}