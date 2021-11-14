#include<bits/stdc++.h>
using namespace std;

int main(){
	long long T, n, t, a, b;
	cin>>T;
	for(t=1; t<=T; t++){
		cin>>n;
		cout<<"Case "<<t<<":"<<"\n";
		for(a=1; a<=n; a++){
			for(b=1; b<=(a+1)/2; b++){
				cout<<"*";
			}
			for(b=1; b<=((n+1)/2)*2+1-((a+1)/2)*2; b++){
				if(n-a+1<=n/3){
					cout<<"~";
				}
				else{
					cout<<" ";
				}
			}
			for(b=1; b<=(a+1)/2; b++){
				cout<<"*";
			}
			cout<<"\n";
		}
	}
	return 0;
}
