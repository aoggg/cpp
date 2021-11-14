#include<iostream>
using namespace std;

string num, ans;

int main(){
	int convert, target_c, num10;
	while ( cin >> num >> convert >> target_c ){
		num10 = 0;
		for ( int i = 0, times = num.size() - 1; i < num.size(); i++, times-- ){
			int digits;
			if (  num[i] >= '0' && num[i] <= '9' ){
				digits = num[i] - '0';
			}
			else {
				digits = num[i] - 'A' + 10;
			}
			for ( int j = 0; j < times; j++ ){
				digits *= convert;
			}
			num10 += digits;
		}
		for ( ; num10 > 0 || ans.size() == 0; num10 /= target_c ){
			int digits;
			char digit_ans;
			digits = num10 % target_c;
			if ( digits >= 10 ){
				digit_ans = digits - 10 + 'A';
			}
			else {
				digit_ans = digits - 0 + '0';
			}
			ans = digit_ans + ans;
		}
		if ( ans.size() > 7 ){
			cout << "  ERROR\n";
		}
		else {
			for ( int i = ans.size(); i < 7; i++ ){
				ans = ' ' + ans;
			}
			cout << ans << '\n';
		}
		ans = "";
		num10 = 0;
	}
	return 0;
}
