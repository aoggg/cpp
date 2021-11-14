#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, t;
	while(cin>>n){
		if(n==0){
			break;
		}
		for(t=1; t<n; t++){
			if(t%7==0){
				continue;
			}
			else{
				cout<<t;
				if(t==n-2&&(n-1)%7==0){
					continue;
				}
				else if(t==n-1){
					continue;
				}
				else{
					cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
