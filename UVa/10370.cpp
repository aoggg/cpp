#include<iostream>
#include<iomanip>
using namespace std;

int score[1005];

int main(){
	int C;
	cin >> C;
	for ( int i = 0; i < C; i++ ){
		double N;
		int average = 0;
		double higher = 0, ans;
		cin >> N;
		for ( int i = 0; i < N; i++ ){
			cin >> score[i];
			average += score[i];
			score[i] *= N;
		}
		for ( int i = 0; i < N; i++ ){
			if ( score[i] > average ){
				higher++;
			}
		}
		cout << fixed << setprecision(3) << higher * 100 / N << "%\n";
	}
	return 0;
}
