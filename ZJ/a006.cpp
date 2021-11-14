#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, D, x, x1, x2;
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	if(D<0){
		cout<<"No real root\n";
	}
	else if(D==0){
		x=(-b)/(2*a);
		cout<<"Two same roots x="<<x<<"\n";
	}
	else{
		D=sqrt(D);
		x1=((-b)+D)/(2*a);
		x2=((-b)-D)/(2*a);
		cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<"\n";
	}
	return 0;
}
