#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b;
	cin>>a>>b;
	if(a==1)
	{
		if(b>=8)
		{
			cout<<"PASS!\n";
		}
		else
		{
			cout<<"FAIL! You see see you!\n";
		}
	}
	else if(a==2)
	{
		if(b>=9)
		{
			cout<<"PASS!\n";
		}
		else
		{
			cout<<"FAIL! You see see you!\n";
		}
	}
	else
	{
		if(b==10)
		{
			cout<<"PASS!\n";
		}
		else
		{
			cout<<"FAIL! You see see you!\n";
		}
		
	}
	return 0;
}
