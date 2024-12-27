// Atcoder abc385_b
// 2024-12-27

#include <iostream>
using namespace std;

const string DIR = "UDLR";
const int MX[] = {-1, 1, 0, 0};
const int MY[] = {0, 0, -1, 1};
const int MAXN = 105;

string S[MAXN];
int H, W;

bool check(int x, int y) {
    if (x < 0 || x >= H || y < 0 || y >= W) return false;
    if (S[x][y] == '#') return false;
    return true;
}

int main() {
    int X, Y;
    cin >> H >> W >> X >> Y;
    X--;
    Y--;
    for (int i = 0; i < H; i++) cin >> S[i];
    string T;
    cin >> T;
    int house = 0;
    for (int i = 0; i < T.size(); i++) {
        int dir = 0;
        for (dir = 0; dir < 4; dir++)
            if(DIR[dir] == T[i]) break;
        int nx = X + MX[dir], ny = Y + MY[dir];
        if (check(nx, ny)) {
            X = nx;
            Y = ny;
            if (S[X][Y] == '@') {
                house++;
                S[X][Y] = '.';
            }
        }
    }
    cout << X + 1 << ' ' << Y + 1 << ' ' << house << '\n';
    return 0;
}