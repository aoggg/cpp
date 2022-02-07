#include<iostream>
using namespace std;

int num[1000000], arr[1000000];

void merge (int l, int r){
	int mid = (l + r) / 2;
	for (int i = l, j = mid + 1, k = l; k <= r; k++){
		if (j > r || (i <= mid && num[i] < num[j])){
			arr[k] = num[i];
			i++;
		}
		else {
			arr[k] = num[j];
			j++;
		}
	}
	for (int i = l; i <= r; i++){
		num[i] = arr[i];
	}
}

void msort (int l, int r){
	if (l >= r){
		return;
	}
	int mid = (l + r) / 2;
	msort (l, mid);
	msort (mid + 1, r);
	merge (l, r);
}

int main(){
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> num[i];
	}
	msort (0, N - 1);
	bool first = true;
	for (int i = 0; i < N; i++){
		if (!first){
			cout << ' ';
		}
		cout << num[i];
		first = false;
	}
	cout << '\n';
	return 0;
}
