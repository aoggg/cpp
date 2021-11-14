#include<bits/stdc++.h>
using namespace std;

int main(){
	long long x;
	cin>>x;
	do{
		cout<<x%2;
		x=x/2;
	}while(x!=0);
	cout<<"\n";
	return 0;
}
