// Luogu 3374
// 2025-01-09

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 5e5 + 5;

struct BIT {
    ll sum[MAXN];
    int size;

    int lowbit(int x) {
        return x & (-x);
    }

    void init(int N) {
        size = N;
        for (int i = 1; i <= N; i++) sum[i] = 0;
        return;
    }

    ll query(int x) {
        ll res = 0;
        for (int i = x; i > 0; i -= lowbit(i)) res += sum[i];
        return res;
    }

    void upd(int x, ll v) {
        for (int i = x; i <= size; i += lowbit(i)) sum[i] += v;
        return;
    }
} bit;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    bit.init(n);
    for (int i = 1; i <= n; i++) {
        ll v;
        scanf("%lld", &v);
        bit.upd(i, v);
    }
    while (m--) {
        int op;
        scanf("%d", &op);
        int x, y;
        ll k;
        switch (op) {
            case 1:
                scanf("%d%lld", &x, &k);
                bit.upd(x, k);    
                break;
            
            default:
                scanf("%d%d", &x, &y);
                printf("%lld\n", bit.query(y) - bit.query(x - 1));
                break;
        }
    }
    return 0;
}