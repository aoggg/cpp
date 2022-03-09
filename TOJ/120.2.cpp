#include<iostream>
using namespace std;

long long n[200001], amount[200001];

int main(){
	int N;
	cin >> N;
	amount[0] = 0;
	for (int i = 1; i <= N; i++){
		cin >> n[i];
		amount[i] = amount[i - 1] + n[i];
	}
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++){
		int a, b;
		cin >> a >> b;
		if (a >= b){
			swap (a, b);
		}
		cout << amount[b] - amount[a - 1] << '\n';
	}
	return 0;
}
