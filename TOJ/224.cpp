#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, c;
	cin>>a>>b;
	if(a>=b)
	{
		for(c=b+1; c<=a; c++)
		{
			b*=c;
		}
		cout<<b<<"\n";
	}
	else
	{
		for(c=a+1; c<=b; c++)
		{
			a*=c;
		}
		cout<<a<<"\n";
	}

	return 0;
}
