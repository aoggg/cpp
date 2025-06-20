// Atcoder abc394_b
// 2025-06-20

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 55;

string s[MAXN];

bool cmp(string a, string b) {
    return a.size() < b.size();
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> s[i];
    sort(s, s + N, cmp);
    for (int i = 0; i < N; i++) cout << s[i];
    cout << endl;
    return 0;
}