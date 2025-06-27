// Atcoder abc396_c
// 2025-06-27

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll B[MAXN], W[MAXN];

bool cmp(ll a, ll b) {
    return a > b;
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> B[i];
    for (int i = 0; i < M; i++) cin >> W[i];
    sort(B, B + N, cmp);
    sort(W, W + M, cmp);
    int ptr = 0;
    ll ans = 0;
    while (ptr < N && ptr < M && W[ptr] >= 0) {
        if (W[ptr] + B[ptr] < 0) break;
        ans += W[ptr] + B[ptr];
        ptr++;
    }
    while (ptr < N && B[ptr] >= 0) {
        ans += B[ptr];
        ptr++;
    }
    cout << ans << endl;
    return 0;
}