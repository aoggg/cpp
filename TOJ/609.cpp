#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, N;
	cin>>N;
	for(a=1; a<=N; a++){
		for(b=N-a; b>=1; b--){
			cout<<" ";
		}
		for(c=1; c<=2*(a-1)+1; c++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(a=N-1; a>=1; a--){
		for(b=N-a; b>=1; b--){
			cout<<" ";
		}
		for(c=1; c<=2*(a-1)+1; c++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
