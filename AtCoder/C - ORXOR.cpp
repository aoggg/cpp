#include<iostream>
using namespace std;

long long A[20];

long long counting (long long s, int num, int N, long long first, long long second){
	if (num == N){
		return first ^ second;
	}
	if (s % 2 == 0){
		first = first | A[num];
	}
	else {
		second = second | A[num];
	}
	s >>= 1;
	counting (s, num + 1, N, first, second);
}

int main(){
	int N;
	cin >> N;
	long long situation = 1;
	for (int i = 0; i < N; i++){
		situation *= 2;
		cin >> A[i];
	}
	bool first = true;
	long long least;
	for (long long i = 0; i < situation; i++){
		if (first){
			first = false;
			least = counting (i, 0, N, 0, 0);
		}
		least = min (least, counting (i, 0, N, 0, 0));
	}
	cout << least << '\n';
	return 0;
}
