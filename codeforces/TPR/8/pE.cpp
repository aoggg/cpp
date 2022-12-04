#include<iostream>
using namespace std;

bool appeared[10];

int main(){
	string a1, a2;
	cin >> a1 >> a2;
	for (int i = 0; i < a1.size(); i++){
		appeared[a1[i] - '0'] = true;
	}
	bool possible = false;
	for (int i = 0; i < a2.size(); i++){
		if (appeared[a2[i] - '0']){
			possible = true;
			break;
		}
	}
	if (possible){
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}
