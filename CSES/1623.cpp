#include<iostream>
using namespace std;

long long apples[20];

long long counting (int s, int num, long long first, long long second, int n){ 
	if (num == n){
		return abs (first - second);
	}
	if (s % 2 == 0){
		first += apples[num];
	}
	else {
		second += apples[num];
	}
	s >>= 1;
	counting (s, num + 1, first, second, n); 
}

int main(){
	int n;
	cin >> n;
	long long situation = 1;
	for (int i = 0; i < n; i++){
		situation *= 2;
		cin >> apples[i];
	}
	long long ans;
	bool first = true;
	for (int i = 0; i < situation; i++){
		if (first){
			ans = counting (i, 0, 0, 0, n);
			first = false;
			continue;
		}
		ans = min (counting (i, 0, 0, 0, n), ans); 
	}
	cout << ans << '\n';
	return 0;
}
