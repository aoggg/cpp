#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	if(a<c&&b>c||a<d&&b>d||a>c&&b<d)
	{
		cout<<"yes\n"; 
	}
	else
	{
		cout<<"no\n";
	}
	return 0;
}
