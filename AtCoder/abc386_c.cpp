// Atcoder abc386_c
// 2024-12-28

#include <iostream>
using namespace std;

int main() {
    int K;
    string S, T;
    cin >> K >> S >> T;
    int op = 0;
    bool check = true;
    if (S.size() != T.size()) {
        if (S.size() == T.size() + 1) {
            for (int i = 0, j = 0; i < S.size(); i++, j++) {
                if (S[i] != T[j]) {
                    i++;
                    op++;
                    if (op > 1) {
                        check = false;
                        break;
                    }
                }
            }
        }
        else if (S.size() + 1 == T.size()) {
            for (int i = 0, j = 0; j < T.size(); i++, j++) {
                if (S[i] != T[j]) {
                    i--;
                    op++;
                    if (op > 1) {
                        check = false;
                        break;
                    }
                }
            }
        }
        else {
            check = false;
        }
    }
    else {
        for (int i = 0; i < S.size(); i++) {
            if (S[i] != T[i]) {
                op++;
                if (op > 1) {
                    check = false;
                    break;
                }
            }
        }
    }
    if (check) puts("Yes");
    else puts("No");
    return 0;
}