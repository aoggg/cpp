#include<iostream>
using namespace std;

long long counter (long long B, long long P, long long M){
	int n;
	if (P == 0){
		return 1;
	}
	if (P % 2 != 0){
		n = counter (B, (P - 1) / 2, M);
		return (n * n) % M * B % M;
	}
	else {
		n = counter (B, P / 2, M);
		return n * n % M;
	}
}
int main(){
	long long B, P, M;
	while (cin >> B >> P >> M){
		cout << counter (B, P, M) << '\n';
	}
	return 0;
}
