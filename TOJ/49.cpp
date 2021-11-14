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
	string c;
	char d, e, f;
	while(cin>>c>>d>>a>>e>>b>>f){
		if(c=="GCD"){
			GCD(a, b);
			cout<<GCD(a, b)<<"\n";
		}
		else if(c=="LCM"){
			GCD(a, b);
			cout<<a*b/GCD(a, b)<<"\n";
		}
		else if(c=="ADD"){
			cout<<a+b<<"\n";
		}
		else if(c=="SUB"){
			cout<<a-b<<"\n";
		}
		else if(c=="MUL"){
			cout<<a*b<<"\n";
		}
		else{
			cout<<a/b<<"\n";
		}
	}
	return 0;
}
