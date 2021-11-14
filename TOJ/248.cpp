#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, c, d;
	cin>>a>>b;
	for(c=1; c<=a; c++)
	{
		for(d=1; d<=b; d++)
		{
			cout<<c<<"*"<<d<<"="<<c*d<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
