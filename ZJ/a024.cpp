#include<bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b){
	if(a==0||b==0){
		return a+b;
	}
	else{
		GCD(b%a, a);
	}
}

int main(){
	long long a, b;
	cin>>a>>b;
	cout<<GCD(a, b)<<"\n";
	return 0;
}
