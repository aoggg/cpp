#include<iostream>
using namespace std;

string s;
char ans[35];

void DFS ( int depth, int r, int place ){
	if ( depth == r ){
		for ( int i = 0; i < r; i++ ){
			cout << ans[i];
		} 
		cout << '\n';
		return;
	}
	for ( int i = place; i <= s.size() - ( r - depth ); i++ ){
		ans[depth] = s[i];
		DFS ( depth + 1, r, i + 1 );
	}
}

void qsort ( int a, int b ){
	if ( a >= b ){
		return;
	}
	int i = a;
	for ( int j = a + 1; j <= b; j++ ){
		if ( s[j] < s[a] ){
			i++;
			swap ( s[i], s[j] );
		}
	}
	swap ( s[a], s[i] );
	qsort ( a, i - 1 );
	qsort ( i + 1, b );
} 

int main(){
	int r;
	while ( cin >> s >> r ){
		qsort ( 0, s.size() - 1 );
		DFS ( 0, r, 0 );
	}
	return 0;
}
