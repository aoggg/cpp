#include <iostream>
#include <utility>
using namespace std;

pair<int, int> counting(int K) {
	if (K == 0) {
		return {1, 0};
	}
	else {
		pair<int, int> num = counting(K - 1);
		return {num.second, num.first + num.second};
	}
}

int main() {
	int K;
	cin >> K;
	pair<int, int> ans = counting(K);
	cout << ans.first << ' ' << ans.second << '\n';
	return 0;
}