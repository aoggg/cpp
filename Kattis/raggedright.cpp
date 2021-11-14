#include<iostream>
using namespace std;

string s;
int length[105];

int main(){
	long long n = 0, score = 0, i;
	for ( i = 0; getline ( cin, s ); i++ ){
		length[i] = s.size();
		if ( length[i] > n ){
			n = length[i];
		}
	}
	for ( int j = 0; j < i - 1; j++ ){
		if ( length[j] != n ){
			score += ( n - length[j] ) * ( n - length[j] );
		}
	}
	cout << score << '\n';
	return 0;
}
