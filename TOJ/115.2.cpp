#include<iostream>
using namespace std;

string card[10], covered;

int main(){
	for ( int i = 0; i < 10; i++ ){
		card[i] = "EMPTY";
	}
	int N;
	cin >> N;
	for ( int i = 1; i <= N; i++ ){
		int places;
		cin >> covered >> places;
		card[places - 1] = covered;
	}
	for ( int i = 0; i < 10; i++ ){
		cout << card[i] << '\n';
	}
	return 0;
}
