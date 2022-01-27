#include<iostream>
using namespace std;

int num[1005];

int main(){
	int N;
	while ( cin >> N ){ 
		int change = 0;
		for ( int i = 0; i < N; i++ ){
			cin >> num[i];
		}
		for ( int i = N - 1; i > 0; i-- ){
			for ( int j = 0; j < i; j++ ){
				if ( num[j] > num[i] ){
					change++;
				}
			}
		}
		cout << "Minimum exchange operations : " << change << '\n'; 
	}
	return 0;
}
