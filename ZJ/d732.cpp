#include<iostream>
using namespace std;

int A[100000];

int search (int x, int n){
	int place = 0, step = n - 1;
	while (step > 0 && place + step < n){
		if (A[place + step] <= x){
			place += step;
		}
		else {
			step /= 2;
		}
	}
	return place;
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> A[i];
	}
	for (int i = 0; i < k; i++){
		int x;
		cin >> x;
		int place = search(x, n);
		if (x == A[place]){
			cout << place + 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}
	return 0;
}
