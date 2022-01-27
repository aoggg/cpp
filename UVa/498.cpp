#include<iostream>
using namespace std;

int c[10000];
string s[10000];


int counter ( int x, int num ){
	int ans = 0;
	for ( int i = 0; i <= num; i++ ){
		ans *= x;
		ans += c[i];
	}
	return ans;
}

int main(){
	string cs;
	while ( getline ( cin, cs ) ){
		int num = 0; 
		for ( int i = 0; i < cs.size(); i++ ){
			if ( cs[i] == ' ' ){
				num++;
				continue;
			}
			s[num] += cs[i];
		}
		for ( int i = 0; i <= num; i++ ){
			c[i] = 0;
			bool N = true;
			for ( int j = 0; j < s[i].size(); j++ ){
				if ( s[i][j] == '-' ){
					N = false;
					continue;
				}
				c[i] *= 10;
				c[i] += s[i][j] - '0';
			}
			if ( !N ){
				c[i] = 0 - c[i];
			}
			s[i] = "";
		}
		//num 當前數字的量
		int x;
		string xs;
		getline ( cin, xs );
		bool first = true;
		string xs2 = "";
		for ( int i = 0; i < xs.size(); i++ ){
			if ( xs[i] == ' ' || i == xs.size() - 1 ){
				if ( i == xs.size() - 1 ){
					xs2 += xs[i];
				}
				bool N = true;
				for ( int j = 0; j < xs2.size(); j++ ){
					if ( xs2[j] == '-' ){
						N = false;
						continue;
					}
					x *= 10;
					x += xs2[j] - '0';
				}
				if ( !N ){
					x = 0 - x;
				}
				if ( !first ){
					cout << ' ';
				}
				cout << counter ( x, num );
				first = false;
				x = 0;
				xs2 = "";
				continue;
			}
			xs2 += xs[i];
		}
		cout << '\n';
	}
	return 0;
}
