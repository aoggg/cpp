#include<iostream>
using namespace std;

string s;

int main(){
	int N;
	cin >> N;
	for ( int i = 0; i < N; i++ ){
		cin >> s;
		cout << s.size() << '\n';
	}
	return 0;
}
