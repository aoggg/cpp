#include<iostream>
using namespace std;

int S[150], appeared[2001];

int main(){
	int N;
	cin >> N;
	for (int time = 1; time <= N; time++){
		int M;
		cin >> M;
		for (int i = 0; i < M; i++){
			cin >> S[i];
		}
		for (int i = 0; i + 1 < M; i++){
			for (int j = i + 1; j < M; j++){
				appeared[S[i] + S[j]] = time;
			}
		}
		int T;
		cin >> T;
		for (int i = 0; i < T; i++){
			int OuO;
			cin >> OuO;
			if (appeared[OuO] == time){
				cout << "Yes\n";
			}
			else{
				cout << "No\n";
			}
		}
	}
	return 0;
}
