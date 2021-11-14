#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if(a%4==0)
	{
		if(a%100==0)
		{
			if(a%400==0)
			{
				cout<<"a leap year\n";
			}
			else
			{
				cout<<"a normal year\n";
			}
		}
		else
		{
			cout<<"a leap year\n";
		}
	}
	else
	{
		cout<<"a normal year\n";
	}
	return 0;
 } 
