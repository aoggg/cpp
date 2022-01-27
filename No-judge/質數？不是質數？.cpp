#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N;
	cin >> N;
	bool is_prime = true;
	for (int i = 2; i < sqrt(N); i++){
		if (N % i == 0){
			is_prime = false;
			break;
		}
	}
	if (is_prime){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}
