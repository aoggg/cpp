// Atcoder abc304_b
// 2024-12-28

#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    if (N < (int)1e3) N = N;
    else if (N < (int)1e4) N = N / 10 * 10;
    else if (N < (int)1e5) N = N / 100 * 100;
    else if (N < (int)1e6) N = N / 1000 * 1000;
    else if (N < (int)1e7) N = N / 10000 * 10000;
    else if (N < (int)1e8) N = N / 100000 * 100000;
    else N = N / 1000000 * 1000000;
    printf("%d\n", N);
    return 0;
}