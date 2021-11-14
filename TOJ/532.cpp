#include<iostream>
using namespace std;

int main()
{
	int p, q;
	cin>>p>>q;
	cout<<(p%2==0)+(q%2==0)<<" "<<(p%3==0)+(q%3==0)<<"\n";
	return 0;
}
