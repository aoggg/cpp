#include<Iostream>
using namespace std;

int main() 
{
	int n, a, b;
	cin>>n;
	for(a=2; a<=n; a++)
	{
		for(b=2; b<a; b++)
		{
			if(a%b==0)
			{
				continue;
			}
		}
	}
	cout<<a<<"\n";
	return 0;
 } 
