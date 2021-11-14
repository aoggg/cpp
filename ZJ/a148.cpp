#include<bits/stdc++.h>
using namespace std;

int main(){
	double n, t, ans, s;
	while(cin>>n){
		ans=0;
		for(t=1; t<=n; t++){
			cin>>s;
			ans+=s;
		}
		if(ans>59*n){
			cout<<"no\n";
		}
		else{
			cout<<"yes\n";
		}
	}
	return 0;
}
