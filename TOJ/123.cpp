#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[100005], b[100005];
	long long N, t, s, i, j, k, ans;
	ans=1;
	cin>>N;
	for(t=1; t<=N; t++){
		cin>>a[t];
	}
	for(s=1; s<=N; s++){
		cin>>b[s];
	}
	for(i=1; i<=N; i++){
		if(a[i]==b[i]&&a[i]=='0'){
			ans=0;
			break;
		}
		else{
			continue;
		}
	}
	for(j=1; j<=N-1; j++){
		if(a[j]==b[j+1]&&a[j]=='0'){
			ans=0;
			break;
		}
		else{
			continue;
		}
	}
	for(k=2; k<=N; k++){
		if(a[k]==b[k-1]&&a[k]=='0'){
			ans=0;
			break;
		}
		else{
			continue;
		}
	}
	if(ans==0){
		cout<<"FENESTRATION FORTIFICATION FAILURE!\n";
	}
	else{
		cout<<"FENDED OFF!\n";
	}
	return 0;
}
