// Atcoder abc384_b
// 2024-12-27

#include <iostream>
using namespace std;

const int MAXN = 105;

int main() {
    int N, R;
    scanf("%d%d", &N, &R);
    while (N--) {
        int D, A;
        scanf("%d%d", &D, &A);
        switch (D) {
            case 1:
                if (R >= 1600 && R <= 2799) R += A;
                break;
            
            default:
                if (R >= 1200 && R <= 2399) R += A;
                break;
        }
    }
    printf("%d\n", R);
    return 0;
}