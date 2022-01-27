#include<iostream>
using namespace std;

int main()
{
	int n, a, b, c, d;
	cin>>n;
	for(a=n-1, b=n; a>=0; a--)
	{
		for(c=0; c<=a; c++)
		{
			cout<<" ";
		}
		for(d=1; d<=b; d++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
	return 0;
 } 
