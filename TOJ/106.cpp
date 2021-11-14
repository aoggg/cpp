#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a;
	a=2;
	while(a%71!=0)
	{
		a=a*2+1;
	}
	if(a%3==0)
	{
		cout<<"right\n";
	}
	else
	{
		cout<<"left\n";
	}
	return 0;
}
