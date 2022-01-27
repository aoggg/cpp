#include<iostream>
using namespace std;

unsigned long long times = 0;

int fib (int n){
	times++;
	if (n <= 1){
		return n;
	}
	return fib (n - 1) +fib (n - 2);
}

int main(){
	int n;
	cin >> n;
	fib (n);
	cout << times << '\n';
	return 0;
}
