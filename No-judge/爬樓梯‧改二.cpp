#include<iostream>
using namespace std;

int counter (int n){
	if (n < 0){
		return 0;
	}
	if (n == 0 || n == 1){
		return 1;
	}
	return counter(n - 1) + counter(n - 3) + counter(n - 4);
}

int main(){
	int n;
	cin >> n;
	cout << counter(n) << '\n';
	return 0;
}
