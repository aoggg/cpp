#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if(a>=0&&a<=5)
	{
		cout<<"0\n";
	}
	else if(a>=6&&a<=11)
	{
		cout<<"590\n";
	}
	else if(a>=12&&a<=17)
	{
		cout<<"790\n";
	}
	else if(a>=18&&a<=59)
	{
		cout<<"890\n";
	}
	else
	{
		cout<<"399\n";
	}
	return 0;
 } 
