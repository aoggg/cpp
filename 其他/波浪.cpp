#include<iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin>>n;
	for(a=1; a<=n; a++)
	{
		cout<<a<<" ";
	}
	for(b=n-1; b>=1; b--)
	{
		cout<<b<<" ";
	}
	cout<<"\n";
	return 0;
}
