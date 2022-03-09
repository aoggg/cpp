#include<iostream>
using namespace std;

int same[100000]; 

int main(){
	int k;
	string s;
	cin >> k >> s;
	bool capital;
	if (s[0] <= 'Z' && s[0] >= 'A'){
		capital = true;
	}
	else {
		capital = false;
	}
	int amount = 0;
	for (int i = 0; i < s.size(); i++){
		bool c;
		if (s[i] >= 'A' && s[i] <= 'Z'){
			c = true;
		}
		else {
			c = false;
		}
		if (c == capital){
			same[amount]++;
		}
		else {
			amount++;
			same[amount]++;
			capital = c;
		}
	}
	int l;
	int most = 0;
	for (int i = 0; i <= amount; i++){
		if (same[i] >= k){
			l = k;
			for (int j = i + 1; j <= amount; j++){
				if (same[j] > k){
					l += k;
					break;
				}
				else if (same[j] < k){
					break;
				}
				else {
					l += k;
				}
			}
			most = max (most, l);
		}
	}
	cout << most << '\n';
	return 0;
}
