#include<iostream>
using namespace std;

const string LETTER = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int nl[7500], nr[7500];

string moved (string DRM){
	string l = "", r = "";
	int lnum = 0, rnum = 0;
	for (int i = 0; i < DRM.size() / 2; i++){
		l += DRM[i];
		nl[i] = DRM[i] - 'A';
		lnum += nl[i];
		r += DRM[i + DRM.size() / 2];
		nr[i] = DRM[i + DRM.size() / 2] - 'A';
		rnum += nr[i]; 
	}
	lnum %= 26;
	rnum %= 26;
	for (int i = 0; i < l.size(); i++){
		l[i] = LETTER[(nl[i] + lnum) % 26];
		nl[i] = l[i] - 'A';
		r[i] = LETTER[(nr[i] + rnum) % 26];
		nr[i] = r[i] - 'A';
	}
	for (int i = 0; i < l.size(); i++){
		l[i] = LETTER[(nl[i] + nr[i]) % 26];
	}
	return l;
}

int main(){
	string DRM;
	cin >> DRM;
	cout << moved (DRM) << '\n';
	return 0;
}
