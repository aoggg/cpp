#include <iostream>
using namespace std;

bool visited[1001];
int steps[1001], passed[100000000];

int main() {
	int S, T;
	for (int cases = 1; cin >> S >> T; cases++) {
		if (S == 0) {
			break;
		}
		for (int i = S; i <= T; i++) {
			visited[i] = false;
		}
		cout << "Case " << cases << ": ";
		steps[S] = 0;
		passed[0] = S;
		visited[S] = true;
		int now = 0, next = 1, ans = -1;
		for (now = 0, next = 1; now < next; now++) {
			// cout << passed[now] << ' ';
			if (passed[now] == T) {
				ans = steps[T];
				break;
			}
			int num = passed[now];
			for (int i = 2; i < passed[now]; i++) {
				if (num % i == 0) {
					if (!visited[i + passed[now]] && i + passed[now] <= T) {
						passed[next] = i + passed[now];
						next++;
						steps[i + passed[now]] = steps[passed[now]] + 1;
						visited[i + passed[now]] = true;
					}
					while (num % i == 0) {
						num /= i;
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}