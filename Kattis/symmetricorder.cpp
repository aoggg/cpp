// Kattis symmetricorder

#include <iostream>
using namespace std;

const int MAXN = 20;

string name[MAXN];

int main() {
	int n;
	for (int sets = 1; scanf("%d", &n) && n != 0; sets++) {
		printf("SET %d\n", sets);
		for (int i = 0; i < n; i++) {
			char s[30];
			scanf("%s", s);
			if (i % 2 == 0) {
				name[i / 2] = s;
			}
			else {
				name[n - i / 2 - 1] = s;
			}
		}
		for (int i = 0; i < n; i++) {
			printf("%s\n", name[i].c_str());
		}
	}
	return 0;
}