#include<iostream>
using namespace std;

long long x[200001], amount[200001];

int main(){
	int n, q;
	cin >> n >> q;
	amount[0] = 0;
	for (int i = 1; i <= n; i++){
		cin >> x[i];
		amount[i] = amount[i - 1] + x[i];
	}
	for (int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		cout << amount[b] - amount[a - 1] << '\n';	
	}
	return 0;
}
