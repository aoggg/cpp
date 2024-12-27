// Atcoder abc385_c
// 2024-12-27

#include <iostream>
using namespace std;

const int MAXN = 3e3 + 5;

int main() {
    int N;
    scanf("%d", &N);
    int H[MAXN];
    for (int i = 0; i < N; i++) scanf("%d", H + i);
    int ans = 1;
    for (int K = 1; K < N; K++) {
        for (int i = 0; i < K; i++) {
            int height = H[i];
            int num = 0;
            for (int j = i; j < N; j += K) {
                if (H[j] != height) {
                    height = H[j];
                    num = 0;
                }
                num++;
                ans = max(ans, num);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}