#include<iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin>>n;
	a=1;
	while(n>9)
	{
		n/=10;
		a++;
	}
	cout<<a<<"\n";
	return 0;
}
