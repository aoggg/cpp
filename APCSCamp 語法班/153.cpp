#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, M;
	cin>>a>>M;
	if(a%M<0){
		cout<<a%M+M<<"\n";
	}
	else{
		cout<<a%M<<"\n";
	}
	return 0;
}
