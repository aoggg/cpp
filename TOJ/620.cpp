#include<bits/stdc++.h>
using namespace std;

long long a[200000];

int main(){
	long long N, K, i;
	cin>>N>>K;
	for(i=1; i<=N; i++){
		cin>>a[i];
	}
	if(N==K){
		cout<<"YES\n";
	}
	else if(a[N]>a[1]){
		if(a[N-K+1]==a[N-K]){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
	else if(a[N]==a[1]){
		cout<<"NO\n";
	}
	else{
		if(a[K]==a[K+1]){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
	return 0;
} 
