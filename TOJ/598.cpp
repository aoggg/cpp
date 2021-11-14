#include<bits/stdc++.h>
using namespace std;

int main(){
	long long A, B, C, t;
	cin>>A>>B>>C;
	t=0;
	while(A+B*t<C){
		t++;
	}
	cout<<A+B*t<<"\n";
	return 0;
}

