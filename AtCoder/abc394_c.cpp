// Atcoder abc394_c
// 2025-06-20

#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'W') {
            int tmp = i;
            while (S[i] == 'W') i++;
            if (S[i] == 'A') {
                S[tmp] = 'A';
                for (int j = tmp + 1; j <= i; j++) S[j] = 'C';
            }
        }
    }
    cout << S << endl;
    return 0;
}