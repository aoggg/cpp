// Atcoder abc382_c
// 2025-01-01

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 2e5 + 5;

struct Info {
    int idx;
    int B;
} sushi[MAXN];

bool cmp(Info a, Info b) {
    return a.B > b.B;
}

int main() {
    int N, M;
    scanf("%d%d", &N, &M);
    int A[MAXN];
    for (int i = 0; i < N; i++) scanf("%d", A + i);
    for (int i = 0; i < M; i++) {
        scanf("%d", &sushi[i].B);
        sushi[i].idx = i;
    }
    sort(sushi, sushi + M, cmp);
    int ans[MAXN];
    int ap, bp;
    for (ap = 0, bp = 0; bp < M && ap < N;) {
        if (sushi[bp].B >= A[ap]) {
            ans[sushi[bp].idx] = ap + 1;
            bp++;
        }
        else ap++;
    }
    for (bp; bp < M; bp++) ans[sushi[bp].idx] = -1;
    for (int i = 0; i < M; i++) printf("%d\n", ans[i]);
    return 0;
}