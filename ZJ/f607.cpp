#include<iostream>
#include<set>
#include<utility>
#include<iterator>
using namespace std;

long long times[200000];
set <long long> stick;

int main(){
	int n, L;
	cin >> n >> L;
	long long total = 0;
	for (int time = 0; time < n; time++){
		long long x, i;
		cin >> x >> i;
		times[i - 1] = x;
	}
	stick.insert (0);
	stick.insert (L);
	for (int i = 0; i < n; i++){
		auto place = stick.insert (times[i]).first;
		total += *next (place) - *prev (place);
	}
	cout << total << '\n';
	return 0;
}