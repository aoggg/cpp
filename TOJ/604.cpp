#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, N;
	cin>>N;
	for(a=1; a<=N; a++){
		for(b=N-a; b>=1; b--){
			cout<<" ";
		}
		for(c=1; c<=a; c++){
			cout<<"*";
		}
		cout<<"-"<<a<<"\n";
	}
	return 0;
}
