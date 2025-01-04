// Atcoder abc387_c
// 2025-01-04

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 20;

ll fp(ll n, ll pow) {
    ll res = 1;
    while (pow) {
        if (pow & 1) res *= n;
        n *= n;
        pow >>= 1;
    }
    return res;
}

ll cal(ll n) {
    if (n < 10) return 0;
    int dig[MAXN] = {0};
    int maxd = 0;
    ll tmp = n;
    while (tmp) {
        dig[maxd] = tmp % 10;
        tmp /= 10;
        maxd++;
    }
    ll res = 0;
    for (int i = 1; i < maxd - 1; i++) {
        for (int j = 1; j < 10; j++) res += fp(j, i);
    }
    // fprintf(stderr, "1. %lld\n", res);
    for (int i = maxd - 1; i > 0; i--) {
        for (int j = 0; j < min(dig[maxd - 1], dig[i - 1]); j++) res += fp(dig[maxd - 1], i - 1);
        if (dig[i - 1] >= dig[maxd - 1]) break;
    }
    for (int i = 1; i < dig[maxd - 1]; i++) res += fp(i, maxd - 1);
    bool check = true;
    for (int i = 0; i < maxd - 1; i++) {
        if (dig[i] >= dig[maxd - 1]) check = false;
    }
    if (check) res++;
    // fprintf(stderr, "%lld\n", res);
    return res;
}

int main() {
    ll L, R;
    scanf("%lld%lld", &L, &R);
    // printf("%lld\n", cal(R));
    printf("%lld\n", cal(R) - cal(L - 1));
    return 0;
}