#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a;
	while(cin>>a)
	{
		if(a%4==0)
		{
			if(a%100==0)
			{
				if(a%400==0)
				{
					cout<<"閏年\n";
				}
				else
				{
					cout<<"平年\n";
				}
			}
			else
			{
				cout<<"閏年\n";
			}
		}
		else
		{
			cout<<"平年\n";
		}
	}
	return 0;
}
