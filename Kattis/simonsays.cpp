#include<iostream>
using namespace std;

string command, beginning;

int main(){
	int N;
	cin >> N;
	getline ( cin, command );
	for ( int i = 0; i < N; i++ ){
		getline ( cin, command );
		beginning = "";
		if ( command.size() > 10 ){
			for ( int j = 0; j < 10; j++ ){
				beginning += command[j];
			}
			if ( beginning == "Simon says" ){
				for ( int j = 10; j < command.size(); j++ ){
					cout << command[j];
				}
				cout << '\n';
			}
		}
	}
	return 0;
}
