#include<iostream>
using namespace std;

int counter (int n){
	if (n == 0 || n == 1){
		return 1;
	}
	return counter(n - 2) + counter(n - 1);
} 

int main(){
	int n;
	cin >> n;
	cout << counter(n) << '\n';
	return 0;
}
