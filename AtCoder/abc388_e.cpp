// Atcoder abc388_e
// 2025-01-12

#include <iostream>
#include <queue>
using namespace std;
using pq = priority_queue<int>;

const int MAXN = 5e5 + 5;

int main() {
    int N;
    scanf("%d", &N);
    bool taken[MAXN] = {false};
    int A[MAXN];
    for (int i = 0; i < N; i++) scanf("%d", A + i);
    int l = N / 2, r = N - 1;
    int ans = 0;
    pq not_take;
    while (l >= 0) {
        if (not_take.size() != 0) {
            if (2 * A[l] <= A[not_take.top()]) {
                not_take.pop();
                ans++;
                taken[l] = true;
            }
        }
        if (!taken[r]) not_take.push(r);
        l--;
        r--;
    }
    printf("%d\n", ans);
    return 0;
}