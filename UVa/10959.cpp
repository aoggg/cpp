#include <iostream>
#include <queue>
using namespace std;

bool dance[1000][1000];
int id[1000];
queue<int> people;

int main() {
	int t;
	cin >> t;
	for (int cases = 0; cases < t; cases++) {
		if (cases) {
			cout << '\n';
		}
		while (people.size() != 0) {
			people.pop();
		}
		int P, D;
		cin >> P >> D;
		for (int i = 0; i < P; i++) {
			id[i] = 0;
			for (int j = 0; j < P; j++) {
				dance[i][j] = false;
				dance[j][i] = false;
			}
		}
		for (int i = 0; i < D; i++) {
			int a, b;
			cin >> a >> b;
			dance[a][b] = true;
			dance[b][a] = true;
		}
		people.push(0);
		while (people.size() != 0) {
			int p = people.front();
			people.pop();
			for (int i = 1; i < P; i++) {
				if (dance[p][i] && id[i] == 0) {
					people.push(i);
					id[i] = id[p] + 1;
				}
			}
		} 
		for (int i = 1; i < P; i++) {
			cout << id[i] << '\n';
		}
	}
	return 0;
}