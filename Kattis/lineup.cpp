#include<iostream>
using namespace std;

string names[25];

int main(){
	int N;
	bool is_decreasing = true, is_increasing = true;
	cin >> N;
	for ( int i = 0; i < N; i++ ){
		cin >> names[i];
	}
	for ( int i = 0; i < N - 1; i++ ){
		for ( int j = 0; j < names[i].size() || j < names[i + 1].size(); j++ ){
			if ( names[i][j] < names[i + 1][j] ){
				is_decreasing = false;
				break;
			}
			else if ( names[i][j] > names[i + 1][j] ){
				is_increasing = false;
				break;
			}
			if ( j == names[i].size() - 1 && j < names[i].size() - 1 ){
				is_decreasing = false;
				break;
			}
		}
	}
	if ( is_decreasing ){
		cout << "DECREASING\n";
	}
	else if ( is_increasing ){
		cout << "INCREASING\n";
	}
	else{
		cout << "NEITHER\n";
	}
	return 0;
}
