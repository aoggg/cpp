// Atcoder abc379_d
// 2025-01-08

#include <iostream>
#include <queue>
using namespace std;
using ll = long long;
using qll = queue<ll>;

const int MAXN = 2e5 + 5;
const int PLANT = 0;

qll height;

int main() {
    int Q;
    scanf("%d", &Q);
    ll cur = 0, cnt = 0, tH = 0;
    for (int i = 0; i < Q; i++) {
        int op;
        ll T, H;
        scanf("%d", &op);
        switch (op) {
            case 1:
                height.push(PLANT);
                break;
            case 2:
                scanf("%lld", &T);
                height.push(-T);
                cur += T;
                break;
            default:
                scanf("%lld", &H);
                tH += cur;
                cnt = 0;
                while (height.size() && tH >= H) {
                    tH += height.front();
                    if (height.front() == PLANT) cnt++;
                    height.pop();
                }
                printf("%lld\n", cnt);
                cur = 0;
                break;
        }
    }
    return 0;
}