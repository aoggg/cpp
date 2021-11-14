#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, a, b, c, t;
	cin>>N;
	for(t=1; t<=N; t++){
		cin>>a>>b>>c;
		if(a==1){
			cout<<b+c<<"\n";
		}
		else if(a==2){
			cout<<b-c<<"\n";
		}
		else if(a==3){
			cout<<b*c<<"\n";
		}
		else{
			cout<<b/c<<"\n";
		}
	}
	return 0;
}
