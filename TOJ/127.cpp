#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t, a, b, c, d, e; 
	cin>>t;
	string s;
	cin>>s;
	a=s.size();
	for(b=0; b<a; b++){
		long long c=s[b];
		if((t/26)%2==1){
			d=c+t-26*(t/26);
			cout<<char(d);
		}
		else{
			e=c-(t-26*(t/26));
			if(c-t<65){
				cout<<char(e+26);
			}
			else{
				cout<<char(e);
			}
		}
	}
	cout<<"\n";
	return 0;
}
