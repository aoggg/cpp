// Atcoder abc396_d
// 2025-06-28

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

const int MAXN = 15;

ll w[MAXN][MAXN];
bool visited[MAXN];
ll ans = -1;
vector<int> edge[MAXN];
int N, M;

void dfs(int now, ll cnt) {
    if (now == N) {
        if (ans == -1) ans = cnt;
        else ans = min(ans, cnt);
        return;
    }
    for (int &i : edge[now]) {
        if (!visited[i]) {
            visited[i] = true;
            dfs(i, cnt ^ w[now][i]);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
        cin >> w[u][v];
        w[v][u] = w[u][v];
    }
    visited[1] = true;
    dfs(1, 0);
    cout << ans << endl;
    return 0;
}