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
		for ( int i = 1; i < N; i++ ){
			for ( int j = 0; j < N - i; j++ ){
				if ( num[j] > num[j + 1] ){
					swap ( num[j], num[j + 1] );
					change++;
				}
			}
		}
		cout << "Minimum exchange operations : " << change << '\n'; 
	}
	return 0;
}
