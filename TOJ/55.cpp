//TOJ 55 Number

#include<iostream>
using namespace std;

int id[1000000], num[1000000];

void sorted (int l, int r){
	if (l >= r){
		return ;
	}
	int n = l;
	for (int i = l + 1; i <= r; i++){
		if (id[i] < id[l]){
			n++;
			swap (id[i], id[n]);
			swap (num[i], num[n]);
		}
	}
	swap (id[l], id[n]);
	swap (num[l], num[n]);
	sorted (l, n - 1);
	sorted (n + 1, r);
}

int found (int n, int l, int r){
	bool have = false;
	int where;
	while (l <= r){
		int m = (l + r) / 2;
		if (id[m] == n){
			where = m;
			have = true;
			break;
		}
		else if (id[m] < n){
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	if (!have){
		return -1;
	}
	else {
		return where;
	}
}

int main(){
	int N, amount = 0;
	cin >> N;
	for (int i = 0; i < N; i++){
		int n;
		cin >> n;
		if (amount == 0){
			id[amount] = n;
			num[amount]++;
			amount++;
		}
		else {
			int place = found (n, 0, amount - 1);
			if (place == -1){
				id[amount] = n;
				num[amount]++;
				amount++;
			}
			else {
				num[place]++;
			}
		}
		sorted (0, amount - 1);
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++){
		int ask;
		cin >> ask;
		int place = found (ask, 0, amount - 1);
		if (place == -1){
			cout << 0 << '\n';
		}
		else {
			cout << num[place] << '\n'; 
		}
	}
	return 0;
}