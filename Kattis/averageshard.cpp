#include<iostream>
using namespace std;

long long CS[200000], E[200000];

int main(){
	int T;
	cin >> T;
	for ( int time = 0; time < T; time++ ){
		int NCS, NE;
		long long totalCS = 0, totalE = 0;
		cin >> NCS >> NE;
		for ( int i = 0; i < NCS; i++ ){
			cin >> CS[i];
			totalCS += CS[i];
		}
		for ( int i = 0; i < NE; i++ ){
			cin >> E[i];
			totalE += E[i];
		}
		int people = 0;
		for ( int i = 0; i < NCS; i++ ){
			if ( CS[i] * NCS < totalCS && CS[i] * NE > totalE ){
				people++;
			}
		}
		cout << people << '\n';
	}
	return 0;
}
