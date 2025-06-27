// Atcoder abc396_b
// 2025-06-27

#include <iostream>
using namespace std;

const int MAXN = 105;

int card[MAXN];

int main() {
    int size = 0;
    int Q;
    cin >> Q;
    while (Q--) {
        int op;
        cin >> op;
        int x;
        switch (op) {
            case 1:
                cin >> x;
                card[size] = x;
                size++;
                break;
            default:
                if (size == 0) cout << 0 << endl;
                else {
                    cout << card[size - 1] << endl;
                    size--;
                }
                break;
        }
    }
    return 0;
}