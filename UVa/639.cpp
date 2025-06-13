// UVa 639
// 2025-01-13

#include <iostream>
using namespace std;

const int MAXN = 10;

bool place[MAXN][MAXN];
string mp[MAXN];
int ans;
int n;

bool check(int x, int y) {
    bool blocked = false;
    for (int i = x - 1; i >= 0; i--) {
        if (mp[i][y] == 'X') blocked = true;
        if (place[i][y] && !blocked) return false;
    }
    blocked = false;
    for (int i = x + 1; i < n; i++) {
        if (mp[i][y] == 'X') blocked = true;
        if (place[i][y] && !blocked) return false;
    }
    blocked = false;
    for (int i = y - 1; i >= 0; i--) {
        if (mp[x][i] == 'X') blocked = true;
        if (place[x][i] && !blocked) return false;
    }
    blocked = false;
    for (int i = y + 1; i < n; i++) {
        if (mp[x][i] == 'X') blocked = true;
        if (place[x][i] && !blocked) return false;
    }
    return true;
}

void dfs(int num, int x, int y) {
    if (!check(x, y)) return;
    ans = max(ans, num);
    for (int i = y + 1; i < n; i++) {
        if (!place[x][i] && mp[x][i] != 'X') {
            place[x][i] = true;
            dfs(num + 1, x, i);
            place[x][i] = false;
        }
    }
    for (int i = x + 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!place[i][j] && mp[i][j] != 'X') {
                place[i][j] = true;
                dfs(num + 1, i, j);
                place[i][j] = false;
            }
        }
    }
    return;
}

int main() {
    while (cin >> n) {
        if (n == 0) break;
        ans = 0;
        for (int i = 0; i < n; i++) cin >> mp[i];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!place[i][j] && mp[i][j] != 'X') {
                    place[i][j] = true;
                    dfs(1, i, j);
                    place[i][j] = false;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}