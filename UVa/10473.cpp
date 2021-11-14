#include<iostream>
using namespace std;

string num; 
int num10[128];

const string NUM16 = "0123456789ABCDEF";

int changing ( int start, string s, int base ){
	int ans = 0;
	for ( int i = start, times = 0; i < s.size(); i++, times++ ){
		int dig = num10[s[i]];
		ans = ans * base + dig;
	}
	return ans;
}

int main(){
	for ( int i = 0; i < NUM16.size(); i++ ){
		num10[NUM16[i]] = i;
	}
	while ( cin >> num ){
		if ( num[0] == '-' ){
			break;
		}
		if ( num.size() > 2 && num[1] == 'x' ){
			cout << changing ( 2, num, 16 ) << '\n';
		}
		else {
			string ans = "";
			int ans10 = changing ( 0, num, 10 );
			for ( ; ans10 > 0 || ans.size() == 0; ans10 /= 16 ){
				char dig = NUM16[ans10 % 16];
				ans = dig + ans;
			}
			cout << "0x" << ans << '\n';
		}
	}
	return 0;
}
