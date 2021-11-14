#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin>>a;
	if(a<=10)
	{
		cout<<a*6<<"\n";
	}
	else if(a>10&&a<=20)
	{
		cout<<60+(a-10)*2<<"\n";
	}
	else if(a>20&&a<=40)
	{
		cout<<80+(a-20)<<"\n";
	}
	else
	{
		cout<<"100\n";
	}
	return 0;
}
