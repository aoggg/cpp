#include <iostream>
using namespace std;

int step[1000][4]; // [stairs][上去的最後一步]
bool visited[1000][4];

int counting(int N, int s) {
    if (N <= 0) {
        return 0;
    }
    if (visited[N][s]) {
        return step[N][s];
    }
    visited[N][s] = true;
    if (N == 1 || N == 2 || (N == 3 && s == 3)) {
        if (N == s) {
            step[N][s] = 1;
        }
    }
    else if (s == 1) {
        step[N][s] = counting(N - 1, 2) + counting(N - 1, 3);
    }
    else if (s == 2) {
        step[N][s] = counting(N - 2, 1) + counting(N - 2, 3);
    }
    else {
        step[N][s] = counting(N - 3, 1) + counting(N - 3, 2);
    }
    return step[N][s];
}

int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i <= 3; i++) {
        ans += counting(N, i);
    }
    cout << ans << '\n';
    return 0;
}