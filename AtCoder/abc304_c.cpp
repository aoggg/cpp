// Atcoder abc304_c
// 2024-12-28

#include <iostream>
using namespace std;

const int MAXN = 2e3 + 5;

struct Pos {
    int x;
    int y;
} people[MAXN];

bool check(int a, int b, int cmp) {
    int dx = people[a].x - people[b].x;
    int dy = people[a].y - people[b].y;
    int dis = dx * dx + dy * dy;
    return dis <= cmp;
}

int main() {
    int N, D;
    scanf("%d%d", &N, &D);
    for (int i = 0; i < N; i++) {
        scanf("%d%d", &people[i].x, &people[i].y);
    }
    bool infected[MAXN] = {false};
    int virus[MAXN];
    virus[0] = 0;
    infected[0] = true;
    for (int now = 0, next = 1; now < next; now++) {
        int p = virus[now];
        for (int i = 0; i < N; i++) {
            if (!infected[i] && check(p, i, D * D)) {
                infected[i] = true;
                virus[next] = i;
                next++;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (infected[i]) puts("Yes");
        else puts("No");
    }
    return 0;
}