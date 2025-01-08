// Atcoder abc379_c
// 2025-01-08

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

struct Info {
    ll X;
    ll A;
} stone[MAXN];

ll cal(ll n) {
    return n * (n - 1) / 2;
}

bool cmp(Info a, Info b) {
    return a.X < b.X;
}

int main() {
    int N, M;
    scanf("%d%d", &N, &M);
    bool check = true;
    ll ans = 0;
    for (int i = 0; i < M; i++) scanf("%lld", &stone[i].X);
    for (int i = 0; i < M; i++) scanf("%lld", &stone[i].A);
    sort(stone, stone + M, cmp);
    if (stone[0].X != 1) check = false;
    ll cur = stone[0].A;
    for (int i = 1; i < M && check; i++) {
        fprintf(stderr, "pos = %lld to %lld\n", stone[i - 1].X, stone[i].X);
        ll gap = stone[i].X - stone[i - 1].X;
        fprintf(stderr, "gap = %lld, cur = %lld, ans = %lld\n", gap, cur, ans);
        if (gap > cur) {
            check = false;
            break;
        }
        // ans += cal(cur) - cal(cur - gap);
        cur -= gap;
        ans += cal(gap) + cur * gap;
        cur += stone[i].A;
    }
    fprintf(stderr, "gap = %lld, cur = %lld, ans = %lld\n", N - stone[M - 1].X + 1, cur, ans);
    if (N - stone[M - 1].X + 1 != cur) check = false;
    else ans += cal(N - stone[M - 1].X + 1);
    if (!check) ans = -1;
    printf("%lld\n", ans);
    return 0;
}