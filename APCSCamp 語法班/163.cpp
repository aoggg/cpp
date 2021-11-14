#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, d;
	cin>>a>>b>>c>>d;
	if((a&&c)||(b&&d)){
		cout<<"MAKE\n";
	}
	else{
		cout<<"KATSU\n";
	}
	return 0;
}
