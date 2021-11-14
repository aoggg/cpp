#include<bits/stdc++.h>
using namespace std;

long long ans(long long &a, long long b, long long c){
	if(a>b){
		return c;
	} 
	else{
		c=c*a;
		a++;
		ans(a, b, c);
	}
}

int main(){
	long long a, b, c;
	cin>>a>>b;
	c=1;
	cout<<ans(a, b, c)<<"\n";
	return 0;
}
