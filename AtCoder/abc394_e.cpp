// Atcoder abc394_e
// 2025-06-20

#include <iostream>
#include <queue>
#include <utility>
using namespace std;

const int MAXN = 105;

string edge[MAXN];
int ans[MAXN][MAXN];

int main() {
    int N;
    cin >> N;
    queue<pair<int, int>> route;
    for (int i = 0; i < N; i++) {
        cin >> edge[i];
        route.push(make_pair(i, i));
        ans[i][i] = 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == i) continue;
            if (edge[i][j] != '-') {
                route.push(make_pair(i, j));
                ans[i][j] = 1;
            }
            else ans[i][j] = -1;
        }
    }
    while (route.size() != 0) {
        int x = route.front().first;
        int y = route.front().second;
        route.pop();
        for (int i = 0; i < N; i++) {
            if (edge[i][x] == '-') continue;
            for (int j = 0; j < N; j++) {
                if (ans[i][j] != -1) continue;
                if (edge[i][x] == edge[y][j]) {
                    ans[i][j] = ans[x][y] + 2;
                    route.push(make_pair(i, j));
                }
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j != 0) cout << ' ';
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}