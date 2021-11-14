#include<iostream>
using namespace std;

int main(){
	int A, B, C;
	cin >> A >> B >> C;
	// A - 目前 , B - target, C - 數字owo
	int num10 = 0;
	// num10 - 10進位制ㄉC 
	for ( int times = 0; C > 0; times++, C /= 10 ){
		int dig = C % 10;
		for ( int i = 0; i < times; i++ ){
			dig *= A;
		}
		num10 += dig;
	}
	bool first = true;
	int ans = 0;
	for ( int times = 0; num10 > 0 || first; num10 /= B, times++ ){
		int dig = num10 % B;
		for ( int i = 0; i < times; i++ ){
			dig *= 10;
		}
		ans += dig;
		first = false;
	}
	cout << ans << '\n';
	return 0;
}
