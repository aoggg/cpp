#include<iostream>
using namespace std;

int main()
{
	int n, a, b, c, d;
	cin>>n;
	for(a=1; a<=n; a++)
	{
		for(b=1; b<=a; b++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
	for(c=n-1; c>=1; c--)
	{
		for(d=1; d<=c; d++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
	return 0;
}

