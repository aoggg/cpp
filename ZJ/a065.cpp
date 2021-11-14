#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	long long n, l, s;
	while(cin>>a){
		for(n=0; n<=5; n++){
			l=a[n];
			s=a[n+1];
			if(l<=s){
				cout<<s-l;
			}
			else{
				cout<<l-s;
			}
		}
		cout<<"\n";
	}
	return 0;
}
