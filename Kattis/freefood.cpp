#include<iostream>
using namespace std;

int event[368];

int main(){
	int N;
	int begin = 368, finish = 0, days = 0;
	cin >> N;
	for ( int i = 1; i <= N; i++ ){
		int s, t;
		cin >> s >> t;
		if ( begin > s ){
			begin = s;
		}
		if ( finish < t ){
			finish = t;
		}
		for ( int j = s; j <= t; j++ ){
			event[j]++;
		}
	}
	for ( int i = begin; i <= finish; i++ ){
		if ( event[i] != 0 ){
			days++;
		}
	}
	cout << days << '\n';
	return 0;
}
