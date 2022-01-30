#include<iostream>
using namespace std;

int x[30];

bool possible (int k, int n, int num){
	if (k == 0){
		return true;
	}
	if (k < 0 || num == n){
		return false;
	}
	return (possible (k - x[num], n, num + 1) || possible (k, n, num + 1));
}

int main(){
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> x[i];
	}
	if (possible (k, n, 0)){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}
