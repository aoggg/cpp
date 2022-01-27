#include<iostream>
using namespace std;

int num[1005], time[1005];

int main(){
	int n, most;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> num[i];
		time[num[i]]++;
	}
	most = num[0];
	for ( int i = 0; i < n; i++ ){
		if ( time[num[i]] > time[most] ){
			most = num[i];
		}
		else if ( time[num[i]] == time[most] && num[i] > most ){
			most = num[i];
		}
	}
	cout << most << " appears the most.\n";
	return 0;
}
