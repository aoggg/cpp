// Atcoder abc383_c
// 2024-12-29

#include <iostream>
using namespace std;

struct Info {
    int x, y;
    int steps;
};

const int MAXN = 1e3 + 5;
const int MX[] = {-1, 1, 0, 0};
const int MY[] = {0, 0, -1, 1};

int H, W, D;
bool visited[MAXN][MAXN];
Info route[MAXN * MAXN];
string S[MAXN];

bool check(int x, int y, int steps) {
    if (steps == D) return false;
    if (S[x][y] == '#') return false;
    if (x < 0 || x >= H || y < 0 || y >= W) return false;
    if (visited[x][y]) return false;
    return true;
}

int main() {
    cin >> H >> W >> D;
    int now = 0, next = 0;
    for (int i = 0; i < H; i++) {
        cin >> S[i];
        for (int j = 0; j < W; j++) {
            if (S[i][j] == 'H') {
                route[next].x = i;
                route[next].y = j;
                route[next].steps = 0;
                visited[i][j] = true;
                next++;
            }
        }
    }
    for (now = 0; now < next; now++) {
        int x = route[now].x;
        int y = route[now].y;
        int steps = route[now].steps;
        for (int i = 0; i < 4; i++) {
            int nx = x + MX[i];
            int ny = y + MY[i];
            if (check(nx, ny, steps)) {
                visited[nx][ny] = true;
                route[next].x = nx;
                route[next].y = ny;
                route[next].steps = steps + 1;
                next++;
            }
        }
    }
    cout << next << '\n';
    return 0;
}