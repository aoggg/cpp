// Atcoder abc377_c
// 2025-01-18

#include <iostream>
#include <map>
#include <utility>
#define mp(x,y) make_pair(x,y)
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const int MX[] = {2, 1, -1, -2, 0, -2, -1, 1, 2};
const int MY[] = {1, 2, 2, 1, 0, -1, -2, -2, -1};
const int MAXN = 2e5 + 5;

map<pll, bool> visited;
ll N, M;

bool check(pll pos) {
    ll x = pos.first, y = pos.second;
    if (x <= 0 || x > N || y <= 0 || y > N) return false;
    if (visited[pos]) return false;
    return true;
}

int main() {
    scanf("%lld%lld", &N, &M);
    ll ans = N * N;
    for (int i = 0; i < M; i++) {
        ll x, y;
        scanf("%lld%lld", &x, &y);
        for (int i = 0; i < 9; i++) {
            ll nx = x + MX[i], ny = y + MY[i];
            pll pos = mp(nx, ny);
            if (check(pos)) {
                visited[pos] = true;
                ans--;
            }
        }
    }
    printf("%lld\n", ans);
    return 0;
}