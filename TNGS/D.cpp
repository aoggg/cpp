#include<iostream>
using namespace std;

int main(){
	long long L, R, M;
	cin >> L >> R >> M;
	
	long long most = 0, least = 0;
	for (long long i = L; i < L + 6; i++){
		least += i;
	}
	for (long long i = R; i > R - 6; i--){
		most += i;
	}
	if (L + 5 <= R && M >= least && M <= most){
		cout << "yeah!\n";
	} 
	else {
		cout << "oh no...\n";
	}
	return 0;
}
