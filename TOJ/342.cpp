#include<bits/stdc++.h>
using namespace std;

int main(){
	long long X, a, b;
	while(cin>>X){
		if(X<=25){
			for(a=X+1; a>=1; a--){
				cout<<char(64+a);
			}
			for(a=2; a<=X+1; a++){
				cout<<char(64+a);
			}
			cout<<"\n";
			for(a=1; a<=X-2; a++){
				cout<<char(64+X+1);
				for(b=1; b<=2*X-1;b++){
					cout<<" ";
				}
				cout<<char(64+X+1);
				cout<<"\n";
			}
			for(a=X+1; a>=1; a--){
				cout<<char(64+a);
			}
			for(a=2; a<=X+1; a++){
				cout<<char(64+a);
			}
			cout<<"\n";
			for(a=X+1; a>=1; a--){
				for(b=X-a+1; b>=1; b--){
					cout<<" ";
				}
				for(b=X+1; b>=X-a+1+1; b--){
					cout<<char(64+b);
				}
				for(b=X-a+2+1; b<=X+1; b++){
					cout<<char(64+b);
				}
				cout<<"\n";
			}
		}
		else{
			for(a=1; a<=2*X-1+2; a++){
				cout<<"#";
			}
			cout<<"\n";
			for(a=1; a<=X-3+1; a++){
				cout<<"#";
				for(b=1; b<=2*X-3+2; b++){
					cout<<" ";
				}
				cout<<"#\n";
			}
			for(a=1; a<=2*X-1+2; a++){
				cout<<"#";
			}
			cout<<"\n";
			for(a=X+1; a>=1; a--){
				for(b=X-a+1; b>=1; b--){
					cout<<" ";
				}
				for(b=2*(a-1)+1; b>=1; b--){
					cout<<"#";
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}
