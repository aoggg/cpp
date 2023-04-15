// ZJ a227

#include <iostream>
using namespace std;

void play(int N, char a, char b, char c) {
	if (N == 0) {
		return;
	}
	play(N - 1, a, c, b);
	printf("Move ring %d from %c to %c\n", N, a, c);
	play(N - 1, b, a, c);
}

int main() {
	int N;
	bool FT = true;
	while (scanf("%d", &N) != EOF) {
		if (!FT) {
			puts("");
		}
		FT = false;
		play(N, 'A', 'B', 'C');
	}
	return 0;
}