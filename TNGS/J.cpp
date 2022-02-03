#include<iostream>
using namespace std;

long long x[1000010], s[1000010];

int main(){
	long long n;
	cin >> n;
	for (long long i = 0; i < n; i++){
		cin >> x[i];
	}
	s[0] = x[0];
	long long L = 0;
	long long most = 0;
	for (long long i = 1; i < n; i++){
		s[i] = s[i - 1] + x[i];
		if (s[i] - L > most){
			most = s[i] - L;
		}
		if (s[i] < L){
			L = s[i];
		}
	}
	cout << most << '\n';
	return 0;
}
