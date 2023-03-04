// Problem: Head Guard
// Contest: Kattis
// URL: https://open.kattis.com/problems/headguard
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	char c[505];
	while (scanf("%s", c) != EOF) {
		string s = c;
		int num = 1;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] == s[i - 1]) {
				num++;
			}
			else {
				printf("%d%c", num, s[i - 1]);
				num = 1;
			}
		}
		printf("%d%c\n", num, s[s.size() - 1]);
	}
	return 0;
}