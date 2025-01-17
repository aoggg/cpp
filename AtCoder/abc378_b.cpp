// Atcoder abc378_b
// 2025-01-17

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 105;

struct Info {
    ll mod, remain;
} garbage[MAXN];

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) scanf("%lld%lld", &garbage[i].mod, &garbage[i].remain);
    int Q;
    scanf("%d", &Q);
    while (Q--) {
        int t;
        ll d;
        scanf("%d%lld", &t, &d);
        ll n = d % garbage[t].mod;
        d += (garbage[t].remain - n + garbage[t].mod) % garbage[t].mod;
        printf("%lld\n", d);
    }
    return 0;
}