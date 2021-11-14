#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	long long b, t;
	cin>>a;
	b=a.size();
	for(t=b-1; t>=0; t--){
		cout<<a[t];
	}
	cout<<"\n";
	return 0;
}
