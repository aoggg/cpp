// Atcoder abc394_a
// 2025-06-20

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '2') cout << s[i];
    }
    cout << endl;
    return 0;
}