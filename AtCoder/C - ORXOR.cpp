#include<iostream>
using namespace std;

int A[25];

long long counting (int s, long long F, long long S, int now, int N){
	S |= A[now];
	if (now == N - 1){
		return F ^ S;
	}
	if (s % 2 == 1){
		F ^= S;
		S = 0;
	}
	s >>= 1;
	return counting (s, F, S, now + 1, N);
}

int main(){
	int N;
	cin >> N;
	int situation = 1;
	for (int i = 0; i < N; i++){
		cin >> A[i];
		situation *= 2;
	}
	situation /= 2;
	bool first = true;
	long long least;
	for (int i = 0; i < situation; i++){
		if (first){
			least = counting (i, 0, 0, 0, N);
			first = false;
		}
		least = min (counting (i, 0, 0, 0, N), least);
	}
	cout << least << '\n';
	return 0;
}
