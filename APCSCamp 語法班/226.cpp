#include<iostream>
using namespace std;

int counter (int sec){
	if (sec == 1 || sec == 3){
		return 1;
	}
	if (sec <= 0){
		return 0;
	}
	return counter (sec - 1 - 2) + counter (sec - 3 - 2);
}

int main(){
	int t;
	cin >> t;
	cout << counter (t);
	return 0;
}
