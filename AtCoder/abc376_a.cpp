// Atcoder abc376_a
// 2024-12-25

#include <iostream>
using namespace std;

int main() {
    int N, C;
    scanf("%d %d", &N, &C);
    int last, now;
    scanf("%d", &last);
    int candy = 1;
    for (int i = 1; i < N; i++) {
        scanf("%d", &now);
        if (now - last >= C) {
            candy++;
            last = now;
        }
    }
    printf("%d\n", candy);
    return 0;
}