// Problem: B. 檔案處理
// Contest: Codeforces - 選幹考好欸
// URL: https://codeforces.com/gym/445760/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
#include <map>
using namespace std;

map<string, int> name;

int main() {
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		cout << s;
		if (name[s]) {
			cout << '(' << name[s] << ')';
		}
		cout << '\n';
		name[s]++;
	}
	return 0;
}