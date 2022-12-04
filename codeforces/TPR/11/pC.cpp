#include<iostream>
using namespace std;

int appeared[1000001];

int main(){
	int Q;
	cin >> Q;
	for (int i = 1; i <= 100; i++){
		for (int j = 1; j <= 100; j++){
			for (int k = 1; k <= 100; k++){
				appeared[i + j + k]++;
				appeared[i * j + k]++;
				appeared[i + j * k]++;
				appeared[i * j * k]++;
			}
		}
	}
	for (int i = 0; i < Q; i++){
		int N;
		cin >> N;
		cout << appeared[N] << '\n';
	}
	return 0;
}
