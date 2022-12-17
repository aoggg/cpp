// Problem: Room Allocation
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1164/
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;
using pii = pair<int, int>;
using pqg = priority_queue<pii, vector<pii>, greater<pii>>;

const int MAXN = 2e5 + 5;

struct info {
	pii day;
	int id;
};

info customer[MAXN];
int room[MAXN];
pqg hotel;

bool cmp(info a, info b) {
	return a.day < b.day;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &customer[i].day.first, &customer[i].day.second);
		customer[i].id = i;
	}
	int ans = 0;
	sort(customer, customer + n, cmp);
	for (int i = 0; i < n; i++) {
		int arrive = customer[i].day.first;
		int leave = customer[i].day.second;
		int id = customer[i].id;
		if (hotel.size() == 0 || hotel.top().first >= arrive) {
			int r = hotel.size() + 1;
			hotel.push({leave, r});
			room[id] = r;
			ans = max(ans, (int)hotel.size());
		}
		else {
			int r = hotel.top().second;
			room[id] = r;
			hotel.pop();
			hotel.push({leave, r});
		}
	}
	printf("%d\n", ans);
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			printf(" ");
		}
		printf("%d", room[i]);
	}
	puts("");
	return 0;
}