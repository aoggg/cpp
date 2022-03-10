#include<iostream>
#include<algorithm>
using namespace std;

string rule;

bool cmp (char a, char b){
	int na, nb;
	for (int i = 0; i < rule.size(); i++){
		if (a == rule[i]){
			na = i;
		}
		if (b == rule[i]){
			nb = i;
		}
	}
	if (na >= nb){
		return false;
	}
	return true;
}

int main(){
	string s;
	cin >> rule >> s;
	sort (s.begin(), s.end(), cmp);
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++){
		int x;
		cin >> x;
		cout << s[x - 1] << '\n';
	}
	return 0;
}
