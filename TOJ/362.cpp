// TOJ 362
// 2025-06-14

#include <iostream>
using namespace std;

const int MAXN = 15;

int card[4][MAXN];
int ptr[4];
bool possible;

void dfs() {
    if (possible) return;
    if (ptr[0] == ptr[1] && ptr[1] == ptr[2] && ptr[2] == ptr[3] && ptr[0] == 13) {
        possible = true;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (ptr[i] == 13) continue;
        for (int j = i + 1; j < 4; j++) {
            if (ptr[j] == 13) continue;
            if (card[i][ptr[i]] == card[j][ptr[j]]) {
                ptr[i]++;
                ptr[j]++;
                dfs();
                ptr[i]--;
                ptr[j]--;
            }
        }
    }
    return;
}

int main() {
    for (int i = 0; i < 4; i++) for (int j = 0; j < 13; j++) cin >> card[i][j];
    for (int i = 0; i < 4; i++) ptr[i] = 0;
    possible = false;
    dfs();
    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}