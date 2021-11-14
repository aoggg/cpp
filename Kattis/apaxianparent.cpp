#include<iostream>
using namespace std;

string Y, P, ans;

int main(){
	cin >> Y >> P;
	ans = "";
	if ( Y[Y.size() - 1] == 'e' ){
		ans = Y + 'x' + P; 
	}
	else if ( Y[Y.size() - 1] == 'a' || Y[Y.size() - 1] == 'i' || Y[Y.size() - 1] == 'o' || Y[Y.size() - 1] == 'u' ){
		for ( int i = 0; i < Y.size() - 1; i++ ){
			ans += Y[i];
		}
		ans += "ex" + P;
	}
	else if ( Y[Y.size() - 2] == 'e' && Y[Y.size() - 1] == 'x' ){
		ans = Y + P;
	}
	else{
		ans = Y + "ex" + P;
	}
	cout << ans << '\n';
	return 0;
}
