// Atcoder abc386_e
// 2024-12-28

#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

ll A[MAXN];
int N, K;
ll ans = -1;
ll tmp = 0;
bool bb;

void DFS(int last, int depth, ll num) {
    if (depth == K) {
        if (bb) ans = max(ans, num^tmp);
        else ans = max(num, ans);
        return;
    }
    for (int i = last + 1; N - i + 1 >= K - depth; i++) {
        DFS(i, depth + 1, (num xor A[i]));
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    scanf("%d%d", &N, &K);
    if (N - K < K) {
        bb = true;
        K = N - K;
    }
    for (int i = 1; i <= N; i++) {
        scanf("%lld", A + i);
        tmp ^= A[i];
    }
    DFS(0, 0, 0);
    printf("%lld\n", ans);
    return 0;
}