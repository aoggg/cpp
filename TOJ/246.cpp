#include <iostream>
using namespace std;

int main() {
    long long a, m, b;
    cin >> a >> m >> b;
    a %= b;
    while (m--) {
        long long n;
        char c;
        cin >> n >> c;
        a = a * n % b;
    }
    cout << a << '\n';
    return 0;
}