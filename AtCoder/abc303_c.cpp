// Problem: C - Dash
// Contest: AtCoder - NS Solutions Corporation Programming Contest 2023（AtCoder Beginner Contest 303）
// URL: https://atcoder.jp/contests/abc303/tasks/abc303_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include <iostream>
#include <map>
using namespace std;
using mp = map<int, map<int, bool>>;

const int MAXN = 2e5 + 5;
const string MOVE = "RLUD";
const int MX[] = {1, -1, 0, 0}, MY[] = {0, 0, 1, -1};

mp plane;

int moved(char c) {
	for (int i = 0; i < 4; i++) {
		if (MOVE[i] == c) return i;
	}
}

int main() {
	int N, M, H, K;
	cin >> N >> M >> H >> K;
	string S;
	cin >> S;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		plane[x][y] = true;
	}
	bool collapse = false;
	int x = 0, y = 0;
	int health = H;
	for (int i = 0; i < N; i++) {
		x += MX[moved(S[i])], y += MY[moved(S[i])];
		health--;
		if (health < 0) {
			collapse = true;
			break;
		}
		if (plane[x][y] && health < K) {
			health = K;
			plane[x][y] = false;
		}
	}
	if (collapse) cout << "No\n";
	else cout << "Yes\n";
	return 0;
}