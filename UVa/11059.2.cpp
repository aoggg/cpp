#include<iostream>
using namespace std;

long long S[19];

int main(){
	int N;
	for ( int cases = 1; cin >> N; cases++ ){
		for ( int i = 0; i < N; i++ ){
			cin >> S[i];
		}
		long long most = 0;
		for ( int i = 0; i < N; i++ ){
			long long product = 1;
			for ( int j = i; j < N; j++ ){
				product *= S[j];
				if ( most < product ){
					most = product;
				}
			}
		}
		cout << "Case #" << cases << ": The maximum product is " << most << ".\n";
		cout << '\n';
	}
	return 0;
}
