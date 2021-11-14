#include<iostream>
using namespace std;

int main()
{
	int n, a, b, c, d, e;
	cin>>n;
	for(c=1; c<=n; c++)
	{
		cin>>a>>b;
		for(d=1, e=1; d<=b; d++)
		{
			e*=a;
		}
		cout<<e<<"\n";
	}
}
