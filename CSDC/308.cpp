// CSDC OJ 308
// 2025-01-08

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 1e3 + 5;

int num[MAXN];

bool cmp(int a, int b) {
    if (abs(a - 8) == abs(b - 8)) {
        return a < b;
    }
    return abs(a - 8) < abs(b - 8);
}

int main() {
    string s;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i++) num[i] = s[i] - '0';
    sort(num, num + l, cmp);
    int raw = 0, jp = 0;
    for (int i = 0; i < l; i++) {
        if (i < l / 2) {
            raw += num[i] * 10;
            jp -= num[i] * num[i] - 7 * num[i] + 29;
        }
        else raw += num[i];
    }
    jp += raw;
    cout << raw << ' ' << jp << '\n';
    return 0;
}