#include<iostream>
using namespace std;

int num[1001];

int main(){
	int t;
	cin >> t;
	for (int i = 1, n = 1; i <= 1000; n++){
		if (n % 10 == 3 || n % 3 == 0){
			continue;
		}
		num[i] = n;
		i++;
	}
	for (int i = 0; i < t; i++){
		int k;
		cin >> k;
		cout << num[k] << '\n';
	}
	return 0;
}
