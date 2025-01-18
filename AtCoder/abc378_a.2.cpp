// Atcoder abc378_a
// 2025-01-18

#include <iostream>
using namespace std;


int main() {
    int appeared = 0;
    int ans = 0;
    for(int i = 0; i < 4; i++) {
        int a;
        scanf("%d", &a);
        if (appeared & (1 << a)) ans++;
        appeared ^= (1 << a);
    }
    printf("%d\n", ans);
    return 0;
}