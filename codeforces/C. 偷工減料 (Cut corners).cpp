#include<iostream>
using namespace std;

int total[400001];

int main(){
	string S, T;
	int Q;
	cin >> S >> T >> Q;
	total[0] = 0;
	for (int i = 0; i < S.size(); i++){
		total[i + 1] = total[i];
		if (S[i] != T[i]){
			total[i + 1]++; 
		}
	}
	for (int i = 0; i < Q; i++){
		int L, R;
		cin >> L >> R;
		cout << total[R] - total[L - 1] << '\n';
	}
	return 0;
}
