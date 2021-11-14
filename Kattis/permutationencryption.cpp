#include<iostream>
using namespace std;

string s, group[155], news[155], ans;
int moves[25];

int main(){
	int n;
	while ( cin >> n ){
		ans = "";
		if ( n == 0 ){
			break;
		}
		for ( int i = 0; i < n; i++ ){
			cin >> moves[i];
			moves[i]--;
		}
		getline ( cin, s );
		getline ( cin, s );
		int j = 0;
		for ( int i = 0; i < s.size(); i++ ){
			if ( i % n == 0 && i != 0){
				j++;
			}
			group[j] += s[i];
		}
		if ( group[j].size() % n != 0 ){
//			for ( int i = group[j].size(); i < n; i++ ){
//				group[j] += ' ';
//			}
			group[j].resize( n, ' ' );
		}
		for ( int i = 0; i <= j; i++ ){
			for ( int k = 0; k < group[i].size(); k++ ){
				news[i] += group[i][moves[k]];
			}
		}
		for ( int i = 0; i <= j; i++ ){
			ans += news[i];
		}
		cout << "'" << ans << "'\n";
		for ( int i = 0; i <= j; i++ ){
			group[i] = "";
			news[i] = "";
		}
	}
	return 0;
}
