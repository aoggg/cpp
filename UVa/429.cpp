// Problem: 429 - Word Transformation
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=370
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

string words[205];
int steps[205], passed[205];
bool visited[205];

int main() {
	int T;
	cin >> T;
	bool FT = true;
	while (T--) {
		int num = 0;
		if (!FT) {
			cout << '\n';
		}
		FT = false;
		while (cin >> words[num]) {
			if (words[num] == "*") {
				break;
			}
			num++;
		}
		string s;
		getline(cin, s);
		while (getline(cin, s)) {
			if (s == "") {
				break;
			}
			string B = "", E = "";
			int n;
			for (n = 0; n < s.size(); n++) {
				if (s[n] == ' ') {
					n++;
					break;
				}
				B += s[n];
			}
			for (; n < s.size(); n++) {
				E += s[n];
			}
			for (int i = 0; i < num; i++) {
				visited[i] = false;
			}
			for (int i = 0; i < num; i++) {
				if (words[i] == B) {
					steps[i] = 0;
					passed[0] = i;
					visited[i] = true;
					break;
				}
			}
			int now, next, ans = 0;
			for (now = 0, next = 1; now < next; now++) {
				if (words[passed[now]] == E) {
					ans = steps[passed[now]];
					break;
				}
				for (int i = 0; i < num; i++) {
					if (visited[i] != true && words[passed[now]].size() == words[i].size()) {
						int diff = 0;
						for (int j = 0; j < words[i].size(); j++) {
							if (words[i][j] != words[passed[now]][j]) {
								diff++;
								if (diff > 1) {
									break;
								}
							}
						}
						if (diff <= 1) {
							visited[i] = true;
							steps[i] = steps[passed[now]] + 1;
							passed[next] = i;
							next++;
						}
					}
				}
			}
			cout << B << ' ' << E << ' ' << ans << '\n';
		}
	}
	return 0;
}