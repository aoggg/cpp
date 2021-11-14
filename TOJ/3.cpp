#include<bits/stdc++.h>
using namespace std;

int gcd(long long c, long long d){
	if(c==0||d==0){
		return c+d;
	}
	else{
		gcd(d%c, c);
	}
}

int main(){
	long long T, t, a, b; 
	cin>>T;
	for(t=1; t<=T; t++){
		cin>>a>>b;
		gcd(a, b);
		cout<<gcd(a, b)<<"\n";
	}
	return 0;
}
