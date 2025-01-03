// Atcoder abc380_c
// 2025-01-03

#include <iostream>
using namespace std;

const int MAXN = 5e5 + 5;

string blocks[MAXN];

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    int num = 0;
    int now = 0;
    int idx = 0;
    for (int i = 0; i < N; i++) {
        char colour = S[i];
        string b = "";
        if (colour == '1') {
            num++;
            if (num == K) idx = now;
        }
        while (i < N && S[i] == colour) {
            b += S[i];
            i++;
        }
        blocks[now] = b;
        now++;
        i--;
    }
    swap(blocks[idx], blocks[idx - 1]);
    for (int i = 0; i < now; i++) {
        cout << blocks[i];
    }
    cout << '\n';
    return 0;
}