#include<iostream>
using namespace std;

int score ( int a, int b ){
	if ( 10 * a + b == 12 || 10 * a + b == 21 ){
		return 1000;
	}
	else if ( a == b ){
		return 100 * a + 10 * b;
	}
	else if ( a > b ){
		return 10 * a + b;
	}
	else {
		return 10 * b + a;
	}
}

int main(){
	int s0, s1, r0, r1, s_score, r_score;
	while ( cin >> s0 >> s1 >> r0 >> r1 ){
		if ( s0 == s1 && s1 == r0 && r0 == r1 && r1 == 0 ){
			break;
		}
		s_score = score ( s0, s1 );
		r_score = score ( r0, r1 );
		if ( s_score == r_score ){
			cout << "Tie.\n";
		}
		else if ( s_score > r_score ){
			cout << "Player 1 wins.\n";
		}
		else {
			cout << "Player 2 wins.\n";
		}
	} 
	return 0;
}
