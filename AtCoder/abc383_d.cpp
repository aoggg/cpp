// Atcoder abc383_d
// 2025-01-01

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;

const int MAXN = 2e6 + 5;

vll prime;
bool is_prime[MAXN];

ll fp(ll a, int b) {
    ll res = 1;
    while (b) {
        if (b & 1) res *= a;
        b >>= 1;
        a *= a;
    }
    return res;
}

int main() {
    ll N;
    scanf("%lld", &N);
    for (int i = 0; i < MAXN; i++) is_prime[i] = true;
    for (ll i = 2; i * i <= N; i++) {
        if (!is_prime[i]) continue;
        else {
            prime.push_back(i);
            for (ll j = 2; (j * i) * (j * i) <= N; j++) is_prime[j * i] = false;
        }
    }
    int l = 0, r = prime.size() - 1;
    ll ans = 0;
    while (l < r) {
        ll num = prime[l] * prime[r];
        if (num * num > N) r--;
        else {
            ans += r - l;
            l++;
        }
    }
    for (int i = 0; i < prime.size() && fp(prime[i], 8) <= N; i++) ans++;
    printf("%lld\n", ans);
    return 0;
}