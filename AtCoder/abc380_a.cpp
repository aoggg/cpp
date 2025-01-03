// Atcoder abc380_a
// 2025-01-03

#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int times[15] = {0};
    while (N != 0) {
        times[N % 10]++;
        N /= 10;
    }
    bool check = true;
    for (int i = 1; i <= 3; i++) {
        if (times[i] != i) check = false;
    }
    if (check) puts("Yes");
    else puts("No");
    return 0;
}