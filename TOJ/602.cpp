#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, N;
	cin>>N;
	for(a=1; a<=N; a++){
		for(b=1; b<=a; b++){
			cout<<"*";
		}
		cout<<"-"<<a<<"\n";
	}
	return 0;
}
