#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, c, d;
	cin>>a>>b;
	cin>>c>>d;
	if(c-a==0&&d-b<0)
	{
		cout<<"totally "<<c-a+24-1<<" hours and "<<d-b+60<<" minutes.\n";
	}
	else if(c-a<0)
	{
		if(d-b<0)
		{
			cout<<"totally "<<c-a+24-1<<" hours and "<<d-b+60<<" minutes.\n";
		}
		else
		{
			cout<<"totally "<<c-a+24<<" hours and "<<d-b<<" minutes.\n";
		}
	}
	else if(d-b<0)
	{
		cout<<"totally "<<c-a-1<<" hours and "<<d-b+60<<" minutes.\n";
	}
	else
	{
		cout<<"totally "<<c-a<<" hours and "<<d-b<<" minutes.\n";
	}
	return 0;
}
