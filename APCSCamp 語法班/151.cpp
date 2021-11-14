#include<bits/stdc++.h>
using namespace std;

int main(){
	double PI, a, b, c, d;
	PI=acos(-1);
	cin>>a>>b>>c>>d;
	cout<<fmod(a+b*c, d)<<"\n";
	cout<<fixed<<setprecision(6)<<a/b+c/d<<"\n";
	cout<<fixed<<setprecision(6)<<sin((a-b)/180*PI)*cos((c-d)/180*PI)<<"\n";
	cout<<fixed<<setprecision(6)<<sqrt(abs(a*b-c*d))<<"\n";
	cout<<fixed<<setprecision(6)<<log10(a*b*c*d)<<"\n";
	return 0;
}
