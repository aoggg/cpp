// ZJ c296

#include <iostream>
#include <vector>
using namespace std;

vector<int> people;

// void output() {
	// for (int i = 0; i < people.size(); i++) {
		// fprintf(stderr, "%d ", people[i]);
	// }
	// fprintf(stderr, "\n");
// }

int main() {
	int N, M, K;
	scanf("%d%d%d", &N, &M, &K);
	int total = N;
	for (int i = 1; i <= N; i++) {
		people.push_back(i);
	}
	// fprintf(stderr, "M: %d\n", M);
	int last = 0;
	int lucky;
	while (K--) {
		// fprintf(stderr, "last: %d\ntotal: %d\n", last, total);
		int boom = (M - last + total) % total;
		if (boom == 0) {
			boom = total;
		}
		boom--;
		lucky = people[(boom + 1) % total];
		people.erase(people.begin() + boom);
		last = total - boom - 1;
		total--;
		// output();
	}
	printf("%d\n", lucky);
	return 0;
}