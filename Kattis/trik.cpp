#include<iostream>
using namespace std;

bool have_ball[5];
string moves;

int main(){
	have_ball[0] = true;
	cin >> moves;
	for ( int i = 0; i < moves.size(); i++ ){
		if ( moves[i] == 'A' ){
			swap ( have_ball[0], have_ball[1] );
		}
		else if ( moves[i] == 'B' ){
			swap ( have_ball[1], have_ball[2] );
		}
		else {
			swap ( have_ball[0], have_ball[2] );
		}
	}
	for ( int i = 0; i < 3; i++ ){
		if ( have_ball[i] ){
			cout << i + 1 << '\n';
			break;
		}
	}
	return 0;
}
