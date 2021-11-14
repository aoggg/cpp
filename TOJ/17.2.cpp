#include<bits/stdc++.h>
using namespace std;

void output(int P){
	long long a, b;
	for(a=1; a<=P; a++){
		for(b=P-a; b>=1; b--){
			cout<<" ";
		}
		for(b=1; b<=a; b++){
			cout<<char(64+b);
		}
		for(b=a-1; b>=1; b--){
			cout<<char(64+b);
		}
		cout<<"\n";
	}
	for(a=P-1; a>=1; a--){
		for(b=P-a; b>=1; b--){
			cout<<" ";
		}
		for(b=1; b<=a; b++){
			cout<<char(64+b);
		}
		for(b=a-1; b>=1; b--){
			cout<<char(64+b);
		}
		cout<<"\n";
	}
	return;
}

int main(){
	long long a;
	while(cin>>a){
		output(a);
	}
	return 0;
}
