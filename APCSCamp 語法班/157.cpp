#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, d;
	cin>>a;
	b=a%60;
	c=(a/60)%60;
	d=((a/60)/60);
	cout<<d<<"\n"<<c<<"\n"<<b<<"\n";
	return 0;
}
