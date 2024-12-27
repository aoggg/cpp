// Atcoder abc385_a
// 2024-12-27

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    bool check = false;
    if (A == B && B == C) check = true;
    else if (A + B == C || A + C == B || B + C == A) check = true;
    if (check) puts("Yes");
    else puts("No");
    return 0;
}