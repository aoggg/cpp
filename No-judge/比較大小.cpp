#include<iostream>
using namespace std;

int com (string s, string t, int place){
	if (place == s.size() || place == t.size()){
		if (s.size() == t.size()){
			return 0;
		}
		else if (s.size() < t.size()){
			return -1;
		}
		else {
			return 1;
		}
	}
	if (s[place] != t[place]){
		if (s[place] > t[place]){
			return 1;
		}
		else {
			return -1;
		}
	}
	com (s, t, place + 1);
}

int main(){
	string s, t;
	cin >> s >> t;
	cout << com (s, t, 0) << '\n';
	return 0;
}
