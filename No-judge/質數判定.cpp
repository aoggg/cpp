#include<iostream>
using namespace std;

int main()
{
	int n, i;
	cin>>n;
	for(i=n-1; i>1; i--)
	{
		if(n%i==0)
		{
			cout<<"no\n";
			break;
		}
		else
		{
			continue;
		}
	}
	if(cout<<"no\n")
	{
	}
	else
	{	
		cout<<"yes\n";
	}
	return 0;
}
