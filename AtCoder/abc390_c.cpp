// Atcoder abc390_c
// 2025-01-25

#include <iostream>
using namespace std;

const int MAXN = 1005;

int main() {
    int H, W;
    cin >> H >> W;
    string S[MAXN];
    int lx = MAXN, rx = -1, dy = -1, uy = MAXN;
    for (int i = 0; i < H; i++) {
        cin >> S[i];
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '#') {
                lx = min(lx, i);
                rx = max(rx, i);
                dy = max(dy, j);
                uy = min(uy, j);
            }

        }
    }
    bool check = true;
    for (int i = lx; i <= rx; i++) {
        for (int j = uy; j <= dy; j++) {
            if (S[i][j] == '.') {
                check = false;
                break;
            }
        }
    }
    if (check) puts("Yes");
    else puts("No");
    return 0;
}