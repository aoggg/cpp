// Atcoder abc380_e
// 2025-01-03

#include <iostream>
using namespace std;

const int MAXN = 5e5 + 5;

struct DSU {
    const int NO_PARENT = -1;

    int par[MAXN];
    int colour[MAXN], l[MAXN], size[MAXN];
    int num[MAXN];

    void init(int N) {
        for (int i = 0; i <= N; i++) {
            par[i] = NO_PARENT;
            colour[i] = i;
            l[i] = i;
            size[i] = 1;
            num[i] = 1;
        }
        return;
    }

    int find_par(int x) {
        if (par[x] == NO_PARENT) return x;
        return par[x] = find_par(par[x]);
    }

    void merge(int x, int y) {
        int px = find_par(x);
        int py = find_par(y);
        if (size[px] < size[py]) swap(px, py);
        par[py] = px;
        l[px] = min(l[px], l[py]);
        size[px] += size[py];
    }

    void change_colour(int x, int c) {
        int px = find_par(x);
        num[colour[px]] -= size[px];
        colour[px] = c;
        num[c] += size[px];
        int nl = l[px] - 1;
        int cl = colour[find_par(nl)];
        if (cl == c) merge(px, nl);
        int nr = l[px] + size[px];
        int cr = colour[find_par(nr)];
        if (cr == c) merge(px, nr);
    }
} dsu;

int main() {
    int N;
    scanf("%d", &N);
    dsu.init(N);
    int Q;
    scanf("%d", &Q);
    while (Q--) {
        int op;
        scanf("%d", &op);
        switch (op) {
            int x, c;
            case 1:
                scanf("%d%d", &x, &c);
                dsu.change_colour(x, c);
                break;

            default:
                scanf("%d", &c);
                printf("%d\n", dsu.num[c]);
                break;
        }
    }
    return 0;
}