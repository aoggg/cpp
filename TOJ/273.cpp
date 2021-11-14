#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, t, m, a, b, c, d;
	cin>>N;
	for(t=1; t<=N; t++){
		cin>>m;
		for(a=1; a<=m; a++){
			for(b=m-a; b>=1; b--){
				cout<<" ";
			}
			for(c=m; c>=m-a+1; c--){
				cout<<char(c+64);
			}
			for(d=m-a+2; d<=m; d++){
				cout<<char(d+64);
			}
			cout<<"\n";
		}
		for(a=m-1; a>=1; a--){
			for(b=m-a; b>=1; b--){
				cout<<" "; 
			}
			for(c=m; c>=m-a+1; c--){
				cout<<char(c+64);
			}
			for(d=m-a+2; d<=m; d++){
				cout<<char(d+64);
			}
			cout<<"\n";
		}
	}
	return 0;
}
