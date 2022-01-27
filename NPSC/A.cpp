#include<iostream>
using namespace std;

int people[2][1000005];

int main(){
	int N, M;
	cin >> N >> M;
	for ( int i = 0; i < N; i++ ){
		for ( int j = 0; j < 2; j++ ){
			cin >> people[j][i]; 
		}
	}
	int lines, way, ways = 1;
	for ( lines = 0, way = 0; way >= 0; lines++ ){
		way += people[0][lines];
		if ( lines != 0 ){
			way--;
		}
		if ( way == 0 ){
			break;
		}
		ways *= way;
	}
	bool no_one = true;
	for ( int line = lines, way = 0; way >= 0; lines++ ){
		way += people[1][lines];
		if ( people[1][lines] > 0 ){
			no_one = false;
		}
		if ( lines != 0 && !no_one){
			way--;
		}
		if ( way == 0 ){
			break;
		}
		ways *= way;
	}
	cout << ways << '\n';
	return 0;
}
