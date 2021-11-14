#include<iostream>
using namespace std;

string place;

int main(){
	char direction;
	int N, begin;
	cin >> N >> place >> direction;
	for ( int i = 0; i < N; i++ ){
		if ( place[i] == 'P' ){
			begin = i;
			break;
		}
	}
	if ( direction == 'L' ){
		begin--;
	}
	else{
		begin++;
	}
	for ( int i = 0; i < N; i++ ){
		if ( i == begin ){
			cout << 'P';
		}
		else{
			cout << '.';
		}
	}
	cout << '\n';
	return 0;
}
