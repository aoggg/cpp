#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	while(a%7!=b)
	{
		a+=5;
	 } 
	 while(a%11!=c)
	 {
	 	a+=35;
	 }
	 cout<<a;
	return 0;
}
