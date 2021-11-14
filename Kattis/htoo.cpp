#include<iostream>
using namespace std;

string mole, desired;
int have[128], need[128];
bool appeared[128];

int main(){
	int k;
	cin >> mole >> k >> desired;
	for ( int i = 0; i < mole.size(); i++ ){
		if ( i != mole.size() - 1 && mole[i + 1] >= '0' && mole[i + 1] <= '9' ){
			int j, more = 0;
			for ( j = i + 1; j < mole.size() && mole[j] >= '0' && mole[j] <= '9'; j++ ){
				more = more * 10 + ( mole[j] - '0' );
			}
			have[mole[i]] += more * k;
			i = j - 1;
		}
		else {
			have[mole[i]] += k;
		}
	}
	int less, num;
	bool first = true;
	for ( int i = 0; i < desired.size(); i++ ){
		appeared[desired[i]] = true;
		if ( i != desired.size() - 1 && desired[i + 1] >= '0' && desired[i + 1] <= '9' ){
			int j, more = 0;
			for ( j = i + 1; j < desired.size() && desired[j] >= '0' && desired[j] <= '9'; j++ ){
				more = more * 10 + ( desired[j] - '0' );
			}
			need[desired[i]] += more;
			i = j - 1;
		}
		else {
			need[desired[i]] += 1;
		}
	}
	for ( int i = 'A'; i <= 'Z'; i++ ){
		if ( appeared[i] ){
			num = have[i] / need[i];
			if ( num < less || first ){
				less = num;
			}
			first = false;
		}
	}
	cout << less << '\n';
	return 0;
}
