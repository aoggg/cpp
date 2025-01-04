// Atcoder abc387_d
// 2025-01-04

#include <iostream>
using namespace std;

const int MAXN = 1005;
const int MX[] = {0, 1, 0, -1};
const int MY[] = {1, 0, -1, 0};
const int HO = 1, V = 0;

struct Info {
    int x, y;
    int steps;
    int last_move;
} route[MAXN * MAXN * 2];

string S[MAXN];
bool visited[MAXN][MAXN][2] = {false};
int H, W;

bool check(int x, int y, int mv) {
    if (x < 0 || x >= H || y < 0 || y >= W) return false;
    if (S[x][y] == '#') return false;
    if (visited[x][y][mv]) return false;
    return true;
}

int main() {
    cin >> H >> W;
    int now = 0, next = 0;
    for (int i = 0; i < H; i++) {
        cin >> S[i];
        for (int j = 0; j < W; j++) {
            if (S[i][j] == 'S') {
                for (int k = 0; k <= 1; k++) {
                    route[next].x = i;
                    route[next].y = j;
                    route[next].steps = 0;
                    route[next].last_move = k;
                    visited[i][j][k] = true;
                    next++;
                }
            }
        }
    }
    bool ck = false;
    for (now = 0; now < next; now++) {
        int x = route[now].x;
        int y = route[now].y;
        int steps = route[now].steps;
        int mv = route[now].last_move;
        if (S[x][y] == 'G') {
            ck = true;
            break;
        }
        int nx, ny;
        switch (mv) {
            case V:
                for (int i = 1; i < 4; i += 2) {
                    nx = x + MX[i];
                    ny = y + MY[i];
                    if (check(nx, ny, HO)) {
                        route[next].x = nx;
                        route[next].y = ny;
                        route[next].steps = steps + 1;
                        route[next].last_move = HO;
                        visited[nx][ny][HO] = true;
                        next++;
                    }
                }
                break;
            
            default:
                for (int i = 0; i < 4; i += 2) {
                    nx = x + MX[i];
                    ny = y + MY[i];
                    if (check(nx, ny, V)) {
                        route[next].x = nx;
                        route[next].y = ny;
                        route[next].steps = steps + 1;
                        route[next].last_move = V;
                        visited[nx][ny][V] = true;
                        next++;
                    }
                }
                break;
        }
    }
    if (ck)
        cout << route[now].steps << '\n';
    else cout << "-1\n";
    return 0;
}