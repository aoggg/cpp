// Atcoder abc376_d
// 2024-12-26

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

const int MAXN = 2e5 + 5;

struct Info{
    int step;
    int pos;
};

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    bool visited[MAXN];
    vi edge[MAXN];
    while (M--) {
        int a, b;
        scanf("%d %d", &a, &b);
        edge[a].push_back(b);
    }
    Info route[MAXN];
    route[0].pos = 1;
    route[0].step = 0;
    int ans = -1;
    for (int now = 0, next = 1; now < next; now++) {
        int pos = route[now].pos;
        int step = route[now].step;
        if (pos == 1 && step != 0) {
            ans = step;
            break;
        }
        for (int i = 0; i < edge[pos].size(); i++) {
            int npos = edge[pos][i];
            if (!visited[npos]) {
                visited[npos] = true;
                route[next].pos = npos;
                route[next].step = step + 1;
                next++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}