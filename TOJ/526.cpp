#include<iostream>
using namespace std;

int main()
{
	int n, a, b, c;
	cin>>n;
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	cout<<a+10*b+100*c<<"\n"; 
	return 0;
}
