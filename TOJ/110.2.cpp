#include<bits/stdc++.h>
using namespace std;

void output(int size){
	int a, b, c;
			for(a=1; a<=size-3; a++){
			for(b=size-a; b>=1; b--){
				cout<<" ";
			}
			for(c=2*(a-1)+1; c>=1; c--){
				cout<<"*";
			}
			cout<<"\n";
		}
		for(c=2*(size-4)+1+6; c>=1; c--){
			cout<<"*";
		}
		cout<<"\n"<<" ";
		for(c=2*(size-4)+5; c>=1; c--){
			cout<<"*";
		}
		cout<<"\n";
		for(c=2*(size-4)+1+6; c>=1; c--){
			cout<<"*";
		}
		cout<<"\n";
		for(a=size-3; a>=1; a--){
			for(b=size-a; b>=1; b--){
				cout<<" ";
			}
			for(c=1; c<=2*(a-1)+1; c++){
				cout<<"*";
			}
			cout<<"\n";
		}
}

int main(){
	int n, m, t;
	cin>>n;
	for(t=1; t<=n; t++){
		cin>>m; 
		output(m);
	}
	return 0;
}
