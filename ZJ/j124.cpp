#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<pair<long long, int>> maze;

bool check() {
	if (maze[maze.size() - 1].first % 2 == 0 && maze[maze.size() - 1].second == 2) {
		return true;
	}
	if (maze[maze.size() - 1].first % 2 == 1 && maze[maze.size() - 1].second == 3) {
		return true;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	long long ans = 0;
	maze.push_back({n, 0});
	while (maze.size() != 0) {
		cin >> n;
		maze[maze.size() - 1].second++;
		pair<long long, int> place = maze[maze.size() - 1];
		if (n == 0) {
			while (check()) {
				maze.pop_back();
			}
		}
		else {
			ans += abs(maze[maze.size() - 1].first - n);
			maze.push_back({n, 0});
		}
	}
	cout << ans << '\n';
	return 0;
}