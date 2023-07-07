// Problem: A. 顏文字
// Contest: Codeforces - 台南高中競技程式練盟練習賽-六月場
// URL: https://codeforces.com/group/vyc3POHHoZ/contest/447836/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

const int MAXN = 1e5 + 5;
const char C13[] = {'Q', 'T', 'O', 'A', 'X', '@', '^'};

char s[MAXN];

int check13(char c) {
	for (int i = 0; i < 7; i++) {
		if (c == C13[i]) return i;
	}
	return -1;
}

bool check2(char c) {
	return c == 'w' || c == 'u' || c == 'o' || c == 'v' || c == 'm' || c == '_';
}

int main() {
	int n;
	scanf("%d\n", &n);
	scanf("%s\n", s);
	int num = 0;
	for (int i = 0; i + 2 < n; i++) {
		if (check13(s[i]) != -1) {
			if (check2(s[i + 1]) && check13(s[i + 2]) == check13(s[i])) num++;
		}
	}
	printf("%d\n", num);
	return 0;
}