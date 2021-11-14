#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, a, b, c, w, m;
	w=0;
	m=0;
	cin>>n;
	for(c=1; c<=n; c++)
	{
		cin>>a>>b;
		if(a==2&&b==5)
		{
			m++;
		}
		else if(a==2&&b==0)
		{
			w++;
		}
		else if(a==2&&b==2)
		{
			continue;
		}
		else if(a==5&&b==2)
		{
			w++;
		}
		else if(a==5&&b==0)
		{
			m++;
		}
		else if(a==5&&b==5)
		{
			continue;
		}
		else if(a==0&&b==5)
		{
			w++;
		}
		else if(a==0&&b==2)
		{
			m++;
		}
		else
		{
			continue;
		 } 
	}
	if(m>w)
	{
		cout<<"The prince wins.\n";
	}
	else if(w==m)
	{
		cout<<"The referee wins.\n";
	}
	else
	{
		cout<<"The princess wins.\n";
	}
	return 0;
}
