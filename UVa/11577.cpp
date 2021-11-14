#include<iostream>
#include <algorithm>
using namespace std;

string s, letters, ans;
char c[30];
int appears[30];

int main() {
    int N;
    cin >> N;
    getline(cin, s);
    for (int time = 0; time < N; time++) {
        letters = "";
        ans = "";
        int most;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                letters += s[i] - 'A' + 'a';
            }
            else if (s[i] >= 'a' && s[i] <= 'z') {
                letters += s[i];
            }
        }
        int num = 0;
        // num == appears, c ªº­Ó¼Æ 
        for (int i = 0; i < letters.size(); i++) {
            bool newletter = true;
            for (int j = 0; j < num; j++) {
                if (c[j] == letters[i]) {
                    newletter = false;
                    appears[j]++;
                    break;
                }
            }
            if (newletter) {
                c[num] = letters[i];
                appears[num]++;
                num++;
            }

        }
        most = appears[0];
        for (int i = 0; i < num; i++) {
            if (appears[i] > most) {
                ans = c[i];
                most = appears[i];
            }
            else if (appears[i] == most) {
                ans += c[i];
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans << '\n';
        for (int i = 0; i <= num; i++) {
            appears[i] = 0;
        }
    }
    return 0;
}
