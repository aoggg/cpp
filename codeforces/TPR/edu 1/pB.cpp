#include<iostream>
using namespace std;

int need[200001];

int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int l, r;
		cin >> l >> r;
		need[l]++;
		need[r + 5]--;
	}
	int least = 0, total = 0;
	for (int i = 1; i <= n; i++){
		total += need[i];
		least = max (least, total);
	}
	cout << least << '\n';
	return 0;
}
