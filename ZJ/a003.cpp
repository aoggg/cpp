#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long m, d, s;
	cin>>m>>d;
	s=(m*2+d)%3;
	if(s==0)
	{
		cout<<"´¶³q\n";
	}
	else if(s==1)
	{
		cout<<"¦N\n";
	}
	else
	{
		cout<<"¤j¦N\n";
	}
	return 0;
}
