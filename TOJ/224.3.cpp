#include <iostream>
using namespace std;

void multiple(int a, int b) {
    long long ans = 1;
    for (int i = a; i <= b; i++) {
        ans *= i;
    }
    cout << ans << '\n';
    return;
}

int main() {
    int a, b;
    cin >> a >> b;
    multiple(min(a, b), max(a, b));
    return 0;
}