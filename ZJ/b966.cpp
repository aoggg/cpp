#include<iostream>
using namespace std;

bool cover[10000000];

int main(){
	int N;
	cin >> N;
	int total = 0;
	for (int i = 0; i < N; i++){
		int L, R;
		cin >> L >> R;
		for (int i = L; i < R; i++){
			if (!cover[i]){
				total++;
			}
			cover[i] = true;
		}
	}
	cout << total << '\n';
	return 0;
}
