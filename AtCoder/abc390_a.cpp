// Atcoder abc390_a
// 2025-01-25

#include <iostream>
using namespace std;

const int MAXN = 6;

int main() {
    int A[MAXN];
    for (int i = 1; i <= 5; i++) scanf("%d", A + i);
    int change = 0;
    for (int i = 1; i < 5; i++) {
        if (i != A[i]) {
            swap(A[i], A[i + 1]);
            change++;
        }
        if (change >= 2) break; 
    }
    if (change != 1) puts("No");
    else puts("Yes"); 
    return 0;
}