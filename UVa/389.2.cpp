#include<iostream>
using namespace std;

string num, ans;

const string NUM = "0123456789ABCDEF";
int tbl[128];

int main(){
	int convert, target_c, num10;
	for (int i=0; i<NUM.size(); i++){
		tbl[ NUM[i] ] = i;
	}
	while ( cin >> num >> convert >> target_c ){
		num10 = 0;
		for ( int i = 0, times = num.size() - 1; i < num.size(); i++, times-- ){
			int digits = tbl[num[i]];
			for ( int j = 0; j < times; j++ ){
				digits *= convert;
			}
			num10 += digits;
		}
		for ( ; num10 > 0 || ans.size() == 0; num10 /= target_c ){ 
			char digit_ans = NUM[num10 % target_c];
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
