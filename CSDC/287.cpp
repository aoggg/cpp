// CSDC OJ 287
// 2025-01-08

#include <iostream>
using namespace std;
using ll = long long;

enum {A, B, C, O, TOTAL};

struct Info {
    ll x, y;
} p[TOTAL];

int main() {
    bool check = true;
    for (int i = A; i <= C; i++) {
        scanf("%lld%lld", &p[i].x, &p[i].y);
        for (int j = A; j < i; j++) {
            if (p[i].x == p[j].x && p[i].y == p[j].y) check = false;
        }
    }
    scanf("%lld%lld", &p[O].x, &p[O].y);
    ll R;
    scanf("%lld", &R);
    for (int i = A; i <= C && check; i++) {
        ll dis = (p[i].x - p[O].x) * (p[i].x - p[O].x) + (p[i].y - p[O].y) * (p[i].y - p[O].y);
        if (R * R != dis) check = false;
    }
    if (!check || R <= 0) puts("No");
    else puts("Yes");
    return 0;
}