#include<iostream>
#include<cmath>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for (int time = 0; time < t; time++){
		long long x;
		cin >> x;
		bool possible = false;
		for (long long i = 1; i * i * i < x; i++){
			long long j = x - i * i * i;
			long long n = cbrt(j);
			if (n * n * n == j){
				possible = true;
				break;
			}
		}
		if (possible){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}
