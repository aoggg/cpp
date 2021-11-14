#include<bits/stdc++.h>
using namespace std;

int main(){
	long long p, a, b, c;
	while(cin>>p){
		for(b=1; b<=p; b++){
			for(c=p-b; c>=1; c--){
				cout<<" ";
			}
			for(a=1; a<=b; a++){
				cout<<char(a+64);
			}
			for(a=b-1; a>=1; a--){
				cout<<char(a+64);
			}
			cout<<"\n";
		}
		for(b=p-1; b>=1; b--){
			for(c=p-b; c>=1; c--){
				cout<<" ";
			}
			for(a=1; a<=b; a++){
				cout<<char(a+64);
			}
			for(a=b-1; a>=1; a--){
				cout<<char(a+64);
			}
			cout<<"\n";
		}
	}
	return 0;
}

