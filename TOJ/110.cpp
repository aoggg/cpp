#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, t, a, b, c;
	cin>>n;
	for(t=1; t<=n; t++){
		cin>>m; 
		for(a=1; a<=m-3; a++){
			for(b=m-a; b>=1; b--){
				cout<<" ";
			}
			for(c=2*(a-1)+1; c>=1; c--){
				cout<<"*";
			}
			cout<<"\n";
		}
		for(c=2*(m-4)+1+6; c>=1; c--){
			cout<<"*";
		}
		cout<<"\n"<<" ";
		for(c=2*(m-4)+5; c>=1; c--){
			cout<<"*";
		}
		cout<<"\n";
		for(c=2*(m-4)+1+6; c>=1; c--){
			cout<<"*";
		}
		cout<<"\n";
		for(a=m-3; a>=1; a--){
			for(b=m-a; b>=1; b--){
				cout<<" ";
			}
			for(c=1; c<=2*(a-1)+1; c++){
				cout<<"*";
			}
			cout<<"\n";
		}
	}
	return 0;
}
