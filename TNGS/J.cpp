#include<iostream>
using namespace std;

long long x[1000010], sum[1000010];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> x[i];
	}
	long long most = 0, L = 0;
	bool first = true;
	sum[0] = 0;
	for (int i = 1; i <= n; i++){
		sum[i] = sum[i - 1] + x[i];
		if (sum[i] < sum[L]){
			L = i;
		}
	}
	int gap;
	for (int i = L + 1; i <= n; i++){
		gap = sum[i] - sum[L];
		if (gap > most){
			most = gap;
			first = false;
		}
	}
	cout << most << '\n';
	return 0;
}
