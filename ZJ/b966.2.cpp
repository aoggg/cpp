#include<iostream>
using namespace std;

int cover[10000001];

int main(){
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		int L, R;
		cin >> L >> R;
		cover[L]++;
		cover[R]--;
	}
	int total = 0, now = 0;
	for (int i = 0; i < 10000001; i++){
		now += cover[i];
		if (now > 0){
			total++;
		}
	}
	cout << total << '\n';
	return 0;
}
