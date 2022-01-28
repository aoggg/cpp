#include<iostream>
using namespace std;

int D[10000];

int counter (int n){
	if (n == 0){
		return 0;
	}
	if (n == 1){
		return D[1];
	}
	int i = counter(n - 2);
	int j = counter(n - 1);
	if (i >= j){
		return j + D[n]; 
	}
	else {
		return i + D[n];
	}
}

int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> D[i];
	}
	cout << counter(n) << '\n';
	return 0;
}
