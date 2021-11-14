#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b;
	char c;
	cin>>a>>c>>b;
	if(c=='+')
	{
		cout<<a<<" + "<<b<<" = "<<a+b<<"\n";
	}
	else if(c=='-')
	{
		cout<<a<<" - "<<b<<" = "<<a-b<<"\n";
	}
	else if(c=='*')
	{
		cout<<a<<" * "<<b<<" = "<<a*b<<"\n";
	}
	else
	{
		if(b==0)
		{
			cout<<"ERROR\n";
		}
		else
		{
			cout<<a<<" / "<<b<<" = "<<a/b<<" ... "<<a%b<<"\n";
		}
	}
	return 0;
}
