#include<iostream>
using namespace std;

int main()
{
	int n, a;
	cin>>n;
	a=0;
	while(n>=1)
	{
		a+=n%10;
		n/=10;
	}
	cout<<a<<"\n";
	return 0;
}
