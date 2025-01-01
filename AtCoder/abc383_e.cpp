// Atcoder abc383_e
// 2025-01-01

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll ans = 0;

struct DSU {
    const int NO_PARENT = -1;
    int par[MAXN], A[MAXN], B[MAXN];

    void init(int N) {
        for (int i = 0; i < N; i++) {
            par[i] = NO_PARENT;
            A[i] = 0;
            B[i] = 0;
        }
        return;
    }

    int find_root(int x) {
        if (par[x] != NO_PARENT) return par[x] = find_root(par[x]);
        return x;
    }

    bool query(int a, int b) {
        if (find_root(a) == find_root(b)) return true;
        return false;
    }

    void merge(int a, int b, ll w) {
        int pb = find_root(b);
        int pa = find_root(a);
        par[pb] = pa;
        int less = min(A[pa] + A[pb], B[pa] + B[pb]);
        A[pa] += A[pb] - less;
        B[pa] += B[pb] - less;
        ans += w * less;
    }
} dsu;

struct Info {
    int u, v, w;
} edge[MAXN];

bool cmp(Info a, Info b) {
    return a.w < b.w;
}

int main() {
    int N, M, K;
    scanf("%d%d%d", &N, &M, &K);
    dsu.init(N);
    for (int i = 0; i < M; i++) scanf("%d%d%d", &edge[i].u, &edge[i].v, &edge[i].w);
    sort(edge, edge + M, cmp);
    int A[MAXN], B[MAXN];
    for (int i = 0; i < K; i++) {
        scanf("%d", A + i);
        dsu.A[A[i] - 1]++;
    }
    for (int i = 0; i < K; i++) {
        scanf("%d", B + i);
        dsu.B[B[i] - 1]++;
    }
    for (int i = 0; i < M; i++) {
        if (!dsu.query(edge[i].u - 1, edge[i].v - 1)) 
            dsu.merge(edge[i].u - 1, edge[i].v - 1, edge[i].w);
    }
    printf("%lld\n", ans);
    return 0;
}