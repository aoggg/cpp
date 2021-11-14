#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b;
	cin>>a>>b;
	if(a%2==0)
	{
		cout<<b/2-a/2+1<<"\n";
	}
	else
	{
		cout<<b/2-a/2<<"\n";
	}
	return 0;
}
