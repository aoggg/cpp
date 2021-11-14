#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b, c, d;
	cin>>a>>c;
	cin>>b>>d;
	if(a==b&&c==d)
	{
		cout<<"GOOD\n";
	}
	else if(a==b||c==d)
	{
		cout<<"=~=\n";
	}
	else
	{
		cout<<"OTZ\n";
	}
	return 0;
}
