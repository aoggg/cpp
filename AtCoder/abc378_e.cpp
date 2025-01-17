// Atcoder abc378_e
// 2025-01-17

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll A[MAXN], prefix[MAXN] = {0};

struct BIT {
    int sum[MAXN] = {0};
    int size;

    int lowbit(int x) {
        return x & (-x);
    }

    void init(int N) {
        size = N;
    }

    ll query(int x) {
        ll res = 0;
        for (int i = x; i > 0; i -= lowbit(i)) res += sum[i];
        return res;
    }

    void upd(int x, int v) {
        for (int i = x; i <= size; i += lowbit(i)) sum[i] += v;
    }
} bit;

int main() {
    int N;
    ll M;
    scanf("%d%lld", &N, &M);
    ll ans = 0;
    ll sum = 0;
    bit.init(M);
    for (int i = 1; i <= N; i++) {
        scanf("%lld", A + i);
        prefix[i] = (prefix[i - 1] + A[i] % M) % M;
    }
    for (ll i = 1; i <= N; i++) {
        ans += prefix[i] * i - sum + (i - 1 - bit.query((prefix[i] + 1))) * M;
        sum += prefix[i];
        bit.upd(prefix[i] + 1, 1);
    }
    printf("%lld\n", ans);
    return 0;
}