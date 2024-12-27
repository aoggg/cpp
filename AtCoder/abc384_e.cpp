// Atcoder abc384_e
// 2024-12-27

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pip = pair<ll, pii>;
using pq = priority_queue< pip, vector<pip>, greater<pip> >;

const int MAXN = 505;
const int MX[] = {-1, 1, 0, 0};
const int MY[] = {0, 0, -1, 1};

int H, W;
bool visited[MAXN][MAXN] = {false};

bool check(int x, int y) {
    if (x <= 0 || x > H || y <= 0 || y > W) return false;
    if (visited[x][y]) return false;
    return true;
}

int main() {
    pq adjacent;
    ll S[MAXN][MAXN];
    ll X;
    scanf("%d%d%lld", &H, &W, &X);
    int P, Q;
    scanf("%d%d", &P, &Q);
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            scanf("%lld", S[i] + j);
        }
    }
    ll strength = S[P][Q];
    ll cmp = strength / X;
    visited[P][Q] = true;
    if (strength % X != 0) cmp++;
    for (int i = 0; i < 4; i++) {
        pii pos = make_pair(P + MX[i], Q + MY[i]);
        pip info = make_pair(S[P + MX[i]][Q + MY[i]], pos);
        adjacent.push(info);
        visited[P + MX[i]][Q + MY[i]] = true;
    }
    while (adjacent.size() != 0 && adjacent.top().first < cmp) {
        ll str = adjacent.top().first;
        int x = adjacent.top().second.first;
        int y = adjacent.top().second.second;
        adjacent.pop();
        strength += str;
        cmp = strength / X;
        if (strength % X != 0) cmp++;
        for (int i = 0; i < 4; i++) {
            int nx = x + MX[i];
            int ny = y + MY[i];
            if (check(nx, ny)) {
                pii pos = make_pair(nx, ny);
                pip info = make_pair(S[nx][ny], pos);
                adjacent.push(info);
                visited[nx][ny] = true;
            }
        }
    }
    printf("%lld\n", strength);
    return 0;
}