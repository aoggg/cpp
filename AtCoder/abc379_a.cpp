// Atcoder abc379_a
// 2025-01-08

#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int a = N / 100, b = N % 100 / 10, c = N % 10;
    printf("%d%d%d %d%d%d\n", b, c, a, c, a, b);
    return 0;
}