#include<iostream>
using namespace std;

string table;

int main(){
	cin >> table;
	bool tied = false;
	int a_score = 0, b_score = 0;
	for ( int i = 0; i < table.size(); i += 2 ){
		if ( table[i] == 'A' ){
			a_score += table[i + 1] - '0';
		}
		else{
			b_score += table[i + 1] - '0';
		}
		if ( a_score == 10 && b_score == 10 ){
			tied = true;
		}
		if ( !tied ){
			if ( a_score >= 11 ){
				cout << "A\n";
				break;
			}
			else if ( b_score >= 11 ){
				cout << "B\n";
				break;
			}
		}
		else{
			if ( a_score - b_score >= 2 ){
				cout << "A\n";
				break;
			}
			else if ( b_score - a_score >= 2 ){
				cout << "B\n";
				break;
			}
		}
	}
	return 0;
}
