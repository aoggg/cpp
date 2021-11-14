#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a, b;
	char c;
	cin>>a>>c>>b;
	if(c=='+')
	{
		cout<<fixed<<setprecision(4)<<a<<" + "<<b<<" = "<<a+b<<"\n";
	} 
	else if(c=='-')
	{
		cout<<fixed<<setprecision(4)<<a<<" - "<<b<<" = "<<a-b<<"\n";
	}
	else if(c=='*')
	{
		cout<<fixed<<setprecision(4)<<a<<" * "<<b<<" = "<<a*b<<"\n";
	}
	else if(c=='/')
	{
		if(b==0)
		{
			cout<<"ERROR\n";
		}
		else
		{
			cout<<fixed<<setprecision(4)<<a<<" / "<<b<<" = "<<a/b<<"\n";
		}
	}
	return 0;
}
