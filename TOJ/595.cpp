#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long A, B, c;
	cin>>A>>B;
	for(c=1; 5*c<=A&&7*c<=B; c++){
		cout<<5*c<<" "<<7*c<<"\n";
	}
	return 0;
}

