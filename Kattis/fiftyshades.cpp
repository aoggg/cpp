#include<iostream>
using namespace std;

string color[1005];

int main(){
	int N, ans = 0;
	bool is_pink;
	cin >> N;
	for ( int i = 0; i < N; i++ ){
		cin >> color[i];
		for ( int j = 0; j < color[i].size(); j++ ){
			if ( color[i][j] >= 'A' && color[i][j] <= 'Z' ){
				color[i][j] = color[i][j] - 'A' + 'a';
			}
		}
	}
	for ( int i = 0; i < N; i++ ){
		is_pink = false;
		for ( int j = 0; j < color[i].size() - 3; j++ ){
			if ( color[i][j] == 'p' && color[i][j + 1] == 'i' && color[i][j + 2] == 'n' && color[i][j + 3] == 'k' ){
				is_pink = true;
				ans++;
				break;
			}
		}
		if ( !is_pink ){
			for ( int j = 0; j < color[i].size() - 3; j++ ){
				if ( color[i][j] == 'r' && color[i][j + 1] == 'o' && color[i][j + 2] == 's' && color[i][j + 3] == 'e' ){
					ans++;
					break;
				}
			}
		}
	}
	if ( ans == 0 ){
		cout << "I must watch Star Wars with my daughter\n";
	}
	else{
		cout << ans << '\n';
	}
	return 0;
}
