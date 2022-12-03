// TOJ 405

#include <iostream>
using namespace std;

int transfer(string N, int d) {
	int num = 0;
	for (int i = 0; i < N.size(); i++) {
		num *= d;
		num += N[i] - '0';
	}
	return num;
}

int times(int n, int t) {
	int num = 1;
	while (t != 0) {
		if (t & 1) {
			num *= n;
		}
		t >>= 1;
		n *= n;
	}
	return num;
}

int main() {
	int d;
	scanf("%d", &d);
	char c[10];
	scanf("%s", &c);
	string N = c;
	int num = transfer(N, d);
	bool love = false;
	int add = 0;
	for (int i = 0; i < N.size(); i++) {
		add += times(N[i] - '0', N.size());
		if (add > num) {
			love = false;
			break;
		}
	}
	if (add == num) {
		love = true;
	}
	if (love) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}