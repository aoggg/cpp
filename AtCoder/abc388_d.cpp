// Atcoder abc388_d
// 2025-01-12

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 5e5 + 5;


int main() {
    int N;
    scanf("%d", &N);
    ll A[MAXN];
    for (int i = 1; i <= N; i++) scanf("%lld", A + i);
    ll cur = 0;
    int diff[MAXN] = {0};
    for (ll i = 1; i <= N; i++) {
        cur += diff[i];
        A[i] += cur;
        int stone = min(N - i, A[i]);
        diff[i + 1]++;
        diff[i + stone + 1]--;
        A[i] -= stone;
    }
    for (int i = 1; i <= N; i++) {
        if (i != 1) printf(" ");
        printf("%lld", A[i]);
    }
    puts("");
    return 0;
}