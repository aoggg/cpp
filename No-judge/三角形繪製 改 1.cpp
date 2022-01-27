#include<iostream>
using namespace std;

int main()
{
	int n, a, b, c;
	cin>>n;
	for(a=n-1, b=1; b<=n; a--, b++)
	{
		for(c=1; c<=a; c++)
		{
			cout<<" ";
		}
		for(c=1; c<=b; c++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
	return 0;
 } 
