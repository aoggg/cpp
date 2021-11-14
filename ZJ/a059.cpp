#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, T, t, n, s, ans, x;
	cin>>T;
	for(t=1; t<=T; t++){
		cin>>a>>b;
		cout<<"Case "<<t<<": ";
		ans=0;
		if(a>=b){
			for(n=b; n<=a; n++){
				x=sqrt(n);
				if(x*x==n){
					ans+=n;
				}
				else{
					continue;
				}
			}
			cout<<ans<<"\n";
		}
		else{
			for(n=a; n<=b; n++){
				x=sqrt(n);
				if(x*x==n){
					ans+=n;
				}
				else{
					continue;
				}
			}
			cout<<ans<<"\n";
		}
	}
	return 0;
} 
