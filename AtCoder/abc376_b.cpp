//Atcoder abc376_b
//2024-12-25

#include <iostream>
using namespace std;

const int L = 0, R = 1;

int hand(char h) {
    if (h == 'L') return L;
    return R;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    int pos[2] = {1, 2};
    int ans = 0;
    while (Q--) {
        char H;
        int T;
        cin >> H >> T;
        T %= N;
        int h = hand(H);
        int now = pos[h];
        int step = 0;
        bool meet = false;
        while (now != T) {
            now = (now + 1) % N;
            if (now == pos[(h + 1) % 2]) meet = true;
            step++;
        }
        if (meet) ans += N - step;
        else ans += step;
        pos[h] = T;
    }
    cout << ans << '\n';
    return 0;
}