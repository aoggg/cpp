// Atcoder abc377_d.cpp
// 2025-01-28

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

struct Info {
    ll l, r;
};

bool cmp(Info a, Info b) {
    return a.l > b.l;
}

int main() {
    ll N;
    int M;
    scanf("%d%lld", &M, &N);
    ll ans = N * (N + 1) / 2;
    Info seg[MAXN];
    for (int i = 0; i < M; i++) {
        scanf("%lld%lld", &seg[i].l, &seg[i].r);   
    }
    sort(seg, seg + M, cmp);
    ll minr = seg[0].r;
    ll l = N;
    ll nl = seg[0].l;
    for (int i = 1; i < M; i++) {
        l = nl;
        nl = seg[i].l;
        ans -= (l - nl) * (N - minr + 1);
        minr = min(minr, seg[i].r);
    }
    ans -= (nl - 0) * (N - minr + 1);
    printf("%lld\n", ans);
    return 0;
}