// Kattis Plants vs Bad Guys
// 2025-01-17

#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int num;
    scanf("%d", &num);
    int ans = num;
    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        ans = min(num, ans);
    }
    printf("%d\n", ans + 1);
    return 0;
}