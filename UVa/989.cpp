// UVa 989
// 2025-06-13

#include <iostream>
using namespace std;

const int MAXN = 10;

int mp[MAXN][MAXN];
bool found;

int n;

bool check(int x, int y, int num) {
    for (int i = 0; i < n * n; i++) {
        if (mp[x][i] == num) return false;
    }
    for (int i = 0; i < n * n; i++) {
        if (mp[i][y] == num) return false;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int nx = x / n * n + i;
            int ny = y / n * n + j;
            if (mp[nx][ny] == num) return false;
        }
    }
    return true;
}

void dfs(int x, int y) {
    if (found) return;
    if (x == n * n) {
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                if (j != 0) cout << ' ';
                cout << mp[i][j];
            }
            cout << endl;
        }
        found = true;
        return;
    }
    if (y == n * n) dfs(x + 1, 0);
    else if (mp[x][y] != 0) dfs(x, y + 1);
    else {
        for (int i = 1; i <= n * n; i++) {
            if (check(x, y, i)) {
                mp[x][y] = i;
                dfs(x, y + 1);
                mp[x][y] = 0;
            }
        }
    }
}

int main() {
    bool first = true;
    while (cin >> n) {
        if (!first) cout << endl;
        first = false;
        found = false;
        for (int i = 0; i < n * n; i++) for (int j = 0; j < n * n; j++) cin >> mp[i][j];
        dfs(0, 0);
        if (!found) cout << "NO SOLUTION" << endl;
    }
    return 0;
}