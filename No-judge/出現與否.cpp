#include<iostream>
#include<algorithm>
using namespace std;

int num[100000];

bool search (int L, int R, int target){
	if (L > R){
		return false;
	}
	int m = (L + R) / 2;
	if (num[m] == target){
		return true;
	}
	if (num[m] < target){
		return search (m + 1, R, target);
	}
	else {
		return search (L, m - 1, target);
	}
}

int main(){
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++){
		cin >> num[i];
	}
	sort (num, num + n);
	for (int i = 0; i < q; i++){
		int ask;
		cin >> ask;
		if (search (0, n - 1, ask)){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}