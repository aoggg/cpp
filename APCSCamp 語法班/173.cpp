#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x, d, div;
	cin>>x;
	div=2;
	d=sqrt(x);
	if(x>2){
		do{
			if(x%div==0){
				cout<<"No\n";
				return 0;
			}
			div++;
		}while(div<=d);
		cout<<"Yes\n";
	}
	else if(x==2){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
	return 0;
}
