// Atcoder abc378_d
// 2025-01-17

#include <iostream>
using namespace std;

const int MAXN = 15;
const int MX[] = {-1, 1, 0, 0};
const int MY[] = {0, 0, -1, 1};

int H, W, K;
string S[MAXN];
bool visited[MAXN][MAXN] = {false};
int ans = 0;

bool check(int x, int y) {
    if (x < 0 || x >= H || y < 0 || y >= W) return false;
    if (S[x][y] == '#') return false;
    if (visited[x][y]) return false;
    return true;
}

void DFS(int depth, int x, int y) {
    if (depth == K) {
        ans++;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + MX[i];
        int ny = y + MY[i];
        if (check(nx, ny)) {
            visited[nx][ny] = true;
            DFS(depth + 1, nx, ny);
            visited[nx][ny] = false;
        }
    }
    return;
}

int main() {
    cin >> H >> W >> K;
    for (int i = 0; i < H; i++) cin >> S[i];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                visited[i][j] = true;
                DFS(0, i, j);
                visited[i][j] = false;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}