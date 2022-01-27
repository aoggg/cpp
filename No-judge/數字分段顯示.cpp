#include<iostream>
using namespace std;

string num, ans = "";

int main(){
	int time = 1;
	cin >> num;
	for ( int i = num.size() - 1; i >= 0; i-- ){
		ans = num[i] + ans;
		if ( time % 3 == 0 ){
			ans = ',' + ans;
		}
		time++;
	}
	cout << ans << '\n';
	return 0;
}
