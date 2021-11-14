#include<iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin>>n;
	for(a=1, b=n; b>n/2-1&&a<n/2+1; a++, b--)
	{
		cout<<"("<<a<<", "<<b<<")\n";
	}
	return 0;
}
