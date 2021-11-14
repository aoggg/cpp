#include<iostream>
using namespace std;

int num[3005], difference[3005];

int main(){
	int n;
	while ( cin >> n ){
		bool is_jolly = true;
		for ( int i = 0; i < n; i++ ){
			cin >> num[i];
		}
		for ( int i = 1; i < n; i++ ){
			if ( num[i] >= num[i - 1] ){
				difference[i - 1] = num[i] - num[i - 1];
			}
			else {
				difference[i - 1] = num[i - 1] - num[i];
			}
		}
		for ( int i = 0; i < n; i++ ){
			for ( int j = 0; j < i - 1; j++ ){
				if ( difference[i] == difference[j] ){
					is_jolly = false;
					break;
				}
			}
			if ( !is_jolly ){
				break;
			}
		}
		if ( is_jolly ){
			cout << "Jolly\n";
		}
		else{
			cout << "Not jolly\n";
		}
	}
	return 0;
}
