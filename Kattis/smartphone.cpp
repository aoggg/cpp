#include<iostream>
using namespace std;

string target, sug[5], so_far;

int main(){
	int T;
	cin >> T;
	for ( int time = 0; time < T; time++ ){
		int move, fastest;
		cin >> target >> so_far;
		for ( int i = 0; i < 3; i++ ){
			cin >> sug[i];
		}
		int j = 0;
		for ( j = 0; j < so_far.size() && j < target.size(); j++ ){
			if ( so_far[j] != target[j] ){
				break;
			}
		}
		fastest = so_far.size() - j + target.size() - j;
		for ( int i = 0; i < 3; i++ ){		
			for ( j = 0; j < sug[i].size() && j < target.size(); j++ ){
				if ( sug[i][j] != target[j] ){
				break;
				}
			}
			move = sug[i].size() - j + target.size() - j + 1;
			if ( move < fastest ){
				fastest = move;
			}
		}
		cout << fastest << '\n';
	}
	return 0;
}
