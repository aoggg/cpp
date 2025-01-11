// Atcoder abc388_c
// 2025-01-11

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 5e5 + 5;

int main() {
    int N;
    scanf("%d", &N);
    int A[MAXN];
    for (int i = 0; i < N; i++) scanf("%d", A + i);
    int l = 0, r = 1;
    ll ans = 0;
    while (r < N) {
        if (2 * A[l] > A[r]) r++;
        else {
            ans += N - r;
            l++;
        }
    }
    printf("%lld\n", ans);
    return 0;
}