// Atcoder abc383_f
// 2025-01-02

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 505;
const int MAXX = 5e4 + 5;

ll dp[MAXN][MAXX][2];

struct Info {
    int P, U, C;
} product[MAXN];

bool cmp(Info a, Info b) {
    return a.C < b.C;
}

int main() {
    int N, X, K;
    scanf("%d%d%d", &N, &X, &K);
    for (int i = 0; i < N; i++) scanf("%d%d%d", &product[i].P, &product[i].U, &product[i].C);
    sort(product, product + N, cmp);
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        if (i != 0 && product[i].C != product[i - 1].C) {
            for (int j = 0; j <= X; j++) {
                dp[i][j][0] = max(dp[i][j][0], dp[i][j][1]);
                dp[i][j][1] = 0;
            }
        }
        for (int j = 0; j <= X; j++) {
            dp[i + 1][j][1] = dp[i][j][1];
            if (j >= product[i].P)
                dp[i + 1][j][1] = max(max(dp[i][j - product[i].P][0] + K, dp[i][j - product[i].P][1]) + product[i].U, dp[i][j][1]);
            dp[i + 1][j][0] = dp[i][j][0];
            ans = max(ans, max(dp[i + 1][j][1], dp[i + 1][j][0]));
        }
    }
    printf("%lld\n", ans);
    return 0;
}