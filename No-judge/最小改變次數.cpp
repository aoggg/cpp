#include<iostream>
using namespace std;

string compare, s;

int main(){
	cin >> compare >> s;
	int the_least;
	for ( int i = 0; i <= compare.size() - s.size(); i++ ){
		int moves = 0;
		for ( int j = i; j < i + s.size(); j++ ){
			if ( compare[j] != s[j - i] ){
				moves++;
			}
		}
		if ( i == 0 || moves < the_least ){
			the_least = moves;
		}
	}
	cout << the_least << " times.\n";
	return 0;
}
