// Atcoder abc384_c
// 2024-12-27

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 31;
const string PROB = "ABCDE";

struct Info {
    int score;
    string problem;
} player[MAXN];

int id = 0;
int ps[5];

void DFS(int now, string problem, int score) {
    if (now == 4) return;
    for (int i = now + 1; i < 5; i++) {
        player[id].problem = problem + PROB[i];
        player[id].score = score + ps[i];
        id++;
        DFS(i, player[id - 1].problem, player[id - 1].score);
    }
    return;
}

bool cmp(Info a, Info b) {
    if (a.score == b.score) return a.problem < b.problem;
    return a.score > b.score;
}

int main() {
    for (int i = 0; i < 5; i++) cin >> ps[i];
    DFS(-1, "", 0);
    sort(player, player + MAXN, cmp);
    for (int i = 0; i < MAXN; i++) cout << player[i].problem << '\n';
    return 0;
}