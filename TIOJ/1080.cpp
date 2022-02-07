#include<iostream>
using namespace std;

long long s[100000], arr[100000], amount = 0;

void merge (int l, int r){
	int mid = (l + r) / 2;
	for (int i = l, j = mid + 1, k = l; k <= r; k++){
		if (i > mid){
			arr[k] = s[j++];
		}
		else if (j > r){
			arr[k] = s[i++];
		}
		else if (s[i] <= s[j]){
			arr[k] = s[i++];
		}
		else {
			amount += (mid - i + 1);
			arr[k] = s[j++];
		}
	}
	for (int i = l; i <= r; i++){
		s[i] = arr[i];
	}
}

void msort (int l, int r){
	if (l >= r){
		return;
	}
	int mid = (l + r)  / 2;
	msort (l, mid);
	msort (mid + 1, r);
	merge (l, r);
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	for (int cases = 1; cin >> n; cases++){
		if (n == 0){
			break;
		}
		for (int i = 0; i < n; i++){
			cin >> s[i]; 
		}
		amount = 0;
		msort (0, n - 1);
		cout << "Case #" << cases << ": " << amount << '\n';
	}
	return 0;
}
