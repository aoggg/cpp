// Atcoder abc380_b
// 2025-01-03

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

const int MAXN = 105;

vi ans;

int main() {
    string S;
    cin >> S;
    int num = 0;
    for (int i = 1; i < S.size(); i++) {
        if (S[i] == '|') {
            ans.push_back(num);
            num = 0;
        }
        else num++;
    }
    for (int i = 0; i < ans.size(); i++) {
        if (i != 0) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';
    return 0;
}