// Atcoder abc386_a
// 2024-12-28

#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    bool check = false;
    if (A == B && B == C && C == D) check = false;
    else if (A == B && B == C) check = true;
    else if (A == C && A == D) check = true;
    else if (A == B && A == D) check = true;
    else if (B == C && B == D) check = true;
    else if (A == B && C == D) check = true;
    else if (A == C && B == D) check = true;
    else if (A == D && B == C) check = true;
    if (check) puts("Yes");
    else puts("No");
    return 0;
}