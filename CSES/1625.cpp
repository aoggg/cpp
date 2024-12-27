// CSES 1625
// 2024-10-25

#include <iostream>
using namespace std;

const int MX[] = {1, -1, 0, 0};
const int MY[] = {0, 0, -1, 1};
const char M[] = "DULR";
const int TOTAL = 48, MAXN = 10;

bool visited[MAXN][MAXN];

void init() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) visited[i][j] = false;
    }
    visited[0][0] = true;
}

void DFS(int now, int x, int y, const string DES, int *ans) {
	cerr << x << ' ' << y << '\n';
    if (now == TOTAL) {
    	cerr << (*ans) << '\n';
        (*ans)++;
        return;
    }
    int nx, ny;
    if (DES[now] == '?') {
        for (int i = 0; i < 4; i++) {
            nx = x + MX[i];
            ny = y + MY[i];
            if (nx >= 0 && nx < 7 && ny >= 0 && ny < 7 && !visited[nx][ny]) {
                visited[nx][ny] = true;
                DFS(now + 1, nx, ny, DES, ans);
                visited[nx][ny] = false;
            }
        }
    }
    else {
        int index = 0;
        for (index = 0; index < 4; index++) {
            if (M[index] == DES[now]) break;
        }
        nx = x + MX[index];
        ny = y + MY[index];
        if (nx >= 0 && nx < 7 && ny >= 0 && ny < 7 && !visited[nx][ny]) {
            visited[nx][ny] = true;
            DFS(now + 1, nx, ny, DES, ans);
            visited[nx][ny] = false;
        }
    }
}

int main() {
    string des;
    cin >> des;
    cerr << des.size() << '\n';
    init();
    int ans = 0;
    DFS(1, 0, 0, des, &ans);
    cout << ans << '\n';
    return 0;
}