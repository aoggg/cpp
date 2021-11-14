#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x, div, y, d;
	cin>>x;
	div=sqrt(x);
	if(x>2){
		d=2;
		while(d<=div){
			if(x%d==0){
				cout<<"No\n";
				return 0;
			}
			d++;
		}
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
