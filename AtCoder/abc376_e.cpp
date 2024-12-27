// Atcoder abc376_e
// 2024-12-26

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
using ll = long long;
using pq = priority_queue<long long>;

const int MAXN = 2e5 + 5;

struct Info {
    ll A, B;
};

bool cmp(Info a, Info b) {
    return a.A < b.A;
}

Info num[MAXN];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);
        for (int i = 0; i < N; i++) scanf("%lld", &num[i].A);
        for (int i = 0; i < N; i++) scanf("%lld", &num[i].B);
        sort(num, num + N, cmp);
        ll ans = 0;
        ll Bs = 0;
        pq B;
        for (int i = 0; i < K; i++) {
            Bs += num[i].B;
            B.push(num[i].B);
        }
        ans = num[K - 1].A * Bs;
        for (int i = K; i < N; i++) {
            Bs += num[i].B;
            B.push(num[i].B);
            Bs -= B.top();
            B.pop();
            ans = min(ans, num[i].A * Bs);
        }
        printf("%lld\n", ans);
    }
    return 0;
}