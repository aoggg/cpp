#include<iostream>
using namespace std;

string card[10];
char first[10];
bool visited[10];
int power[10];

int main(){
	for ( int i = 0; i < 5; i++ ){
		cin >> card[i];
		first[i] = card[i][0];
	}
	for ( int i = 0; i < 5; i++ ){
		if ( !visited[i] ){
			for ( int j = 0; j < 5; j++ ){
				if ( first[i] == first[j] ){
					visited[i] = true;
					power[i]++;
				}
			}
		}
	}
	int most;
	for ( int i = 0; i < 5; i++ ){
		if ( i == 0 ){
			most = power[i];
		}
		else if ( most < power[i] ){
			most = power[i];
		}
	}
	cout << most << '\n';
	return 0;
}
