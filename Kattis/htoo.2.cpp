#include<iostream>
using namespace std;

string mole, desired;
int have[128], need[128];

void counting ( string place, int arr[] ){
	for ( int i = 0; i < place.size(); i++ ){
		if ( i != place.size() - 1 && place[i + 1] >= '0' && place[i + 1] <= '9' ){
			int j, more = 0;
			for ( j = i + 1; j < place.size() && place[j] >= '0' && place[j] <= '9'; j++ ){
				more = more * 10 + ( place[j] - '0' );
			}
			arr[place[i]] += more;
			i = j - 1;
		}
		else {
			arr[place[i]] += 1;
		}
	}
}


int main(){
	int k;
	cin >> mole >> k >> desired;
	counting ( mole, have );
	int less, num;
	bool first = true;
	counting ( desired, need );
	for ( int i = 'A'; i <= 'Z'; i++ ){
		if ( need[i] ){
			num = have[i] * k / need[i];
			if ( num < less || first ){
				less = num;
			}
			first = false;
		}
	}
	cout << less << '\n';
	return 0;
}
