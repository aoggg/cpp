// Problem: Identifying Map Tiles
// Contest: Kattis
// URL: https://open.kattis.com/problems/maptiles2
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

const int MX[] = {0, 1, 0, 1}, MY[] = {0, 0, 1, 1};

int main() {
	char c[35];
	scanf("%s", c);
	string s = c;
	int level = s.size();
	int x = 0, y = 0;
	for (int i = 0; i < s.size(); i++) {
		int n = s[i] - '0';
		x = x * 2 + MX[n];
		y = y * 2 + MY[n];
	}
	printf("%d %d %d\n", level, x, y);
	return 0;
}