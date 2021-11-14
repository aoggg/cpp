#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, t, ans;
	while(cin>>N){
		ans=1;
		if(N==0){
			break;
		}
		else{
			for(t=1; t<=N; t++){
				ans*=2;
			}
			cout<<ans<<"\n";
		}
	}
	for(t=1; t<=N; t++){
		ans*=2;
	}
	cout<<ans<<"\n";
	return 0;
}
