// CSES Grid Coloring I
// 2025-06-15

#include <iostream>
using namespace std;

const int MAXN = 505;
const string COLOR = "ABCD";

int n, m;
bool possible;
string mp[MAXN];

bool check(int x, int y, char col) {
    if (x - 1 >= 0) {
        if (mp[x - 1][y] == col) return false;
    }
    if (y - 1 >= 0) {
        if (mp[x][y - 1] == col) return false;
    }
    return true;
}

void dfs(int x, int y) {
    if (possible) return;
    if (x == n) {
        for (int i = 0; i < n; i++) cout << mp[i] << endl;
        possible = true;
        return;
    }
    if (y == m) {
        dfs(x + 1, 0);
        return;
    }
    char col = mp[x][y];
    for (int i = 0; i < 4; i++) {
        if (col == COLOR[i]) continue;
        else if (check(x, y, COLOR[i])) {
            mp[x][y] = COLOR[i];
            dfs(x, y + 1);
            mp[x][y] = col;
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> mp[i];
    possible = false;
    dfs(0, 0);
    if (!possible) cout << "IMPOSSIBLE" << endl;
    return 0;
}