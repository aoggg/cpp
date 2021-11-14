#include<bits/stdc++.h>
using namespace std;

int main()
{
	double N, T, a, b, c, d, e, f, g, h, i, j;
	cin>>N;
	for(T=1; T<=N; T++)
	{
		cin>>a>>b>>c>>d;
		e=b/(3*a);
		f=((b*c)/(6*a*a))-((b*b*b)/(27*a*a*a))-d/(2*a);
		g=(c/(3*a))-((b*b)/(9*a*a));
		h=sqrt((f*f)+(g*g*g));
		i=cbrt(f+h);
		j=cbrt(f-h);
		cout<<fixed<<setprecision(3)<<i+j-e<<"\n";
	}
	return 0;
}
