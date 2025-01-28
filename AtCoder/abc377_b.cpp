// Atcoder abc377_b
// 2025-01-18

#include <iostream>
using namespace std;

const int MAXN = 10;

int main() {
    string S[MAXN];
    bool row[MAXN] = {false}, col[MAXN] = {false};
    for (int i = 0; i < 8; i++) {
        cin >> S[i];
        for (int j = 0; j < 8; j++) {
            if (S[i][j] == '#') {
                col[j] = true;
                row[i] = true;
            }
        }
    }
    int nr = 0, nc = 0;
    for (int i = 0; i < 8; i++) {
        if (!col[i]) nc++;
        if (!row[i]) nr++;
    }
    cout << nc * nr << '\n';
    return 0;
}