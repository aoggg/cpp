#include <iostream>
#include <vector>
using namespace std;

struct info {
	int front;
	int nowC;
};

vector<string> city;
bool route[1000][1000], visited[1000];
info passed[1000];

int main() {
	int M;
	bool FT = true;
	while (cin >> M) {
		if (!FT) {
			cout << '\n';
		}
		FT = false;
		int total = 0; //there have "total" citys
		city.clear();
		while (M--) {
			string s1, s2;
			cin >> s1 >> s2;
			int city1 = 0, city2 = 0;
			for (city1 = 0; city1 < total; city1++) {
				if (city[city1] == s1) {
					break;
				}
			}
			if (city1 == total) {
				city.push_back(s1);
				total++;
			}
			for (city2 = 0; city2 < total; city2++) {
				if (city[city2] == s2) {
					break;
				}
			}
			if (city2 == total) {
				city.push_back(s2);
				total++;
			}
			route[city1][city2] = true;
			route[city2][city1] = true;
			visited[city1] = false;
			visited[city2] = false;
		}
		string B, E;
		cin >> B >> E;
		for (int i = 0; i < total; i++) {
			if (city[i] == B) {
				visited[i] = true;
				passed[0] = {-1, i};
				break;
			}
		}
		int now, next;
		bool possible = false;
		for (now = 0, next = 1; now < next; now++) {
			int C = passed[now].nowC;
			if (city[C] == E) {
				possible = true;
				break;
			}
			for (int i = 0; i < total; i++) {
				if (route[C][i] && !visited[i]) {
					passed[next] = {now, i};
					visited[i] = true;
					next++;
				}
			}
		}
		for (int i = 0; i < total; i++) {
			for (int j = 0; j < total; j++) {
				route[i][j] = false;
			}
		}
		string ans = city[passed[now].nowC];
		if (possible) {
			while (passed[now].front != -1) {
				now = passed[now].front;
				ans += city[passed[now].nowC];
			}
			for (int i = ans.size() - 2; i >= 2; i -= 2) {
				// string s1 = ans[i] + ans[i - 1];
				// string s2 = ans[i + 2] + ans[i + 1];
				cout << ans[i] << ans[i + 1] << ' ' << ans[i - 2] << ans[i - 1] << '\n';
			}
			// cout << ans << '\n';
		}
		else {
			cout << "No route\n";
		}
	}
	return 0;
}