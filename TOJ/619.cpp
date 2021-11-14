#include<bits/stdc++.h>
using namespace std;

int main(){
	long long T, n, i, a, b, c;
	cin>>T;
	for(a=1; a<=T; a++){
		cin>>n;
		c=0;
		for(b=1; b<=n; b++){
			cin>>i;
			c+=i;
		}
		cout<<c<<"\n";
	}
	return 0;
} 
