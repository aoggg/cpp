// Atcoder abc383_a
// 2024-12-29

#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int water = 0;
    int last = 0;
    while (N--) {
        int T, V;
        scanf("%d%d", &T, &V);
        water = max(0, water - (T - last));
        water += V;
        last = T;
    }
    printf("%d\n", water);
    return 0;
}