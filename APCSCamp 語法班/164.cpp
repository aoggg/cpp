#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, d;
	cin>>a>>b>>c>>d;
	if(a>2*c||b>c){
		if(a>=d||b>=d){
			cout<<"KATSU\n";
		}
		else{
			cout<<"MAKE\n";
		}
	}
	else{
		cout<<"MAKE\n";
	}
	return 0;
}
