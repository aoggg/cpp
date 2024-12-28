// Atcoder abc383_b
// 2024-12-29

#include <iostream>
using namespace std;

const int MAXN = 15;

int D, H, W;
string S[MAXN];

int cal(int fx, int fy, int sx, int sy) {
    int res = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                int df = abs(fx - i) + abs(fy - j);
                int ds = abs(sx - i) + abs(sy - j);
                if (df <= D || ds <= D) res++;
            }

        }
    }
    return res;
}

int main() {
    cin >> H >> W >> D;
    for (int i = 0; i < H; i++) cin >> S[i];
    int ans = 0;
    for (int fi = 0; fi < H; fi++) for (int fj = 0; fj < W; fj++) {
        if (S[fi][fj] == '.') {
            for (int si = 0; si < H; si++) for (int sj = fj; sj < W; sj++) {
                if (si == fi && sj == fj) continue;
                if (S[si][sj] == '.') 
                    ans = max(ans, cal(fi, fj, si, sj));
            }
        }
    }
    cout << ans << '\n';
    return 0;
}