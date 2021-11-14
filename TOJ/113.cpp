#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[15], c;
	int b, N, i, x, d;
	cin>>N;
	for(x=0; x<=14; x++){
		a[x]='.';
	}
	for(b=1; b<=N; b++){
		cin>>a[b];
	}
	cin>>c;
	if(c=='L'){
		for(i=0; i<=13; i++){
			a[i]=a[i+1];
		}
	}
	else{
		for(i=14; i>=1; i--){
			a[i]=a[i-1];
		}
	}
	for(d=1; d<=N; d++){
		cout<<a[d];
	}
	cout<<"\n";
	return 0;
}
