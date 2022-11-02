#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	long long b, t;
	cin>>a;
	b=a.size();
	bool first = true;
	for(t=b-1; t>=0; t--){
		if (a[t] == '0' && first) {
			continue;
		}
		first = false;
		cout << a[t];
	}
	if (first) {
		cout << 0;
	}
	cout<<"\n";
	return 0;
}
