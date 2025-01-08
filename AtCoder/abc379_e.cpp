// Atcoder abc379_e
// 2025-01-09

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll num[MAXN];
ll dig[MAXN];

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    ll cnt = 0;
    for (int i = 0, times = 1; i < N; i++, times++) {
        cnt += (S[i] - '0') * times;
        num[i] += cnt;
    }
    int i, idx;
    for (i = N - 1, idx = 0; i >= 1; i--, idx++) {
        dig[idx] = num[i] % 10;
        num[i - 1] += num[i] / 10;
    }
    dig[idx] = num[0];
    for (i = idx; i >= 0; i--) cout << dig[i];
    cout << '\n';
    return 0;
}