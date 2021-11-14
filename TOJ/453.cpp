#include<bits/stdc++.h>
using namespace std;

int main(){
	long long T, a, b, c;
	cin>>T;
	for(a=1; a<=T+1; a++){
		cout<<" ";
	}
	cout<<"*\n";
	for(a=2; a<=T+1; a++){
		for(b=1; b<=T+2-a; b++){
			cout<<" ";
		}
		cout<<"*";
		for(b=a-1+(a-2); b>=1; b--){
			cout<<" ";
		}
		cout<<"*\n";
	}
	for(a=1; a<=3+2*T; a++){
		cout<<"*";
	}
	cout<<"\n";
	for(a=1; a<=T; a++){
		for(b=1; b<=T+1; b++){
			cout<<" ";
		}
		cout<<"*\n";
	}
	for(a=1; a<=3+2*T; a++){
		cout<<"*";
	}
	cout<<"\n";
	for(a=T; a>=1; a--){
		for(b=1; b<=T-a+1; b++){
			cout<<" ";
		}
		cout<<"*";
		for(b=1; b<=2; b++){
			for(c=a-1; c>=1; c--){
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<"\n";
	}
	for(a=1; a<=3+2*T; a++){
		cout<<"*";
	}
	cout<<"\n";
	return 0;
}
