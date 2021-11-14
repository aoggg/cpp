#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, a;
	cin>>N;
	for(a=1; 3*a+5*a+7*a<=N; a++){
		cout<<3*a<<" "<<5*a<<" "<<7*a<<"\n";
	}
	return 0;
}

