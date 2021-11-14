#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for ( int time = 1; time <= n; time++ ){
		if ( time != 1 ){
			cout << '\n';
		}
		int W, wide;
		cin >> W;
		bool possible = true;
		for ( int i = 1; i <= W; i++ ){
			int y1, y2;
			cin >> y1 >> y2;
			if ( i == 1 ){
				wide = y1 - y2;
			}
			else if ( wide != y1 - y2 ){
				possible = false;
			}
		}
		if ( possible ){
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
	return 0;
}
