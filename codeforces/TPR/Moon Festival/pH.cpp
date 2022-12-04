#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string a[1000];

bool cmp (string a, string b){
	if (a + b > b + a){
		return true;
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort (a, a + n, cmp);
	for (int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << '\n';
	return 0;
}
