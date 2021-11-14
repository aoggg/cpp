#include<iostream>
using namespace std;

int num[55];

int main(){
	int N, W, H;
	cin >> N >> W >> H;
	for ( int i = 0; i < N; i++ ){
		cin >> num[i];
	}
	int longest = W * W + H * H;
	for ( int i = 0; i < N; i++ ){
		if ( num[i] * num[i] > longest ){
			cout << "NE\n";
		}
		else{
			cout << "DA\n";
		}
	}
	return 0;
}
