#include<bits/stdc++.h>
using namespace std;

long long N, a[200005], Q, s[200005], r, t, i, j, k;
int main(){
	cin>>N;
	for(t=1; t<=N; t++){
		cin>>a[t];
	}
	for(k=1; k<=N; k++){
		s[k]=s[k-1]+a[k];
	}
	cin>>Q;
	for(r=1; r<=Q; r++){
		cin>>j>>i;
		if(j>=i){
			cout<<s[j]-s[i-1]<<"\n";
		}
		else{
			cout<<s[i]-s[j-1]<<"\n";
		}
	}
	
	return 0;
}
