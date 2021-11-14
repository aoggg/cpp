#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t, a, b, c, d;
	cin>>t;
	for(t=t; t>0; t--)
	{
		cin>>a>>b>>c>>d;
		if(b-a==c-b)
		{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+d-c<<"\n";
		}
		else
		{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*d/c<<"\n";
		}
	}
	return 0;
}
