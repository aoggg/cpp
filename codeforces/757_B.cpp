#include<iostream>
#include<cmath> 
using namespace std;

int s[100000], num[100001];

int main(){
	int n;
	cin >> n;
	int biggest = 0;
	for (int i = 0; i < n; i++){
		cin >> s[i];
		num[s[i]]++;
		biggest = max (biggest, s[i]);
	}
	int most = 1;
	for (int i = 2; i <= biggest; i++){
		int total = 0;
		for (int j = 1; j * i <= biggest; j++){
			total += num[j * i];
		}
		most = max (total, most);
	}
	cout << most << '\n';
	return 0;
}
