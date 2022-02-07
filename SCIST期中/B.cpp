#include<iostream>
using namespace std;

long long num[128];
bool have[128];

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	for (int time = 0; time < n; time++){
		char c;
		string s;
		long long n;
		cin >> c >> s >> n;
		have[c] = true;
		if (s == "="){
			num[c] = n;
		}
		else if (s == "+="){
			num[c] += n;
		}
		else {
			num[c] -= n;
		}
	}
	for (int i = 'a'; i <= 'z'; i++){
		if (have[i]){
			cout << char(i) << ": " << num[i] << '\n';
		}
	}
	return 0;
}
