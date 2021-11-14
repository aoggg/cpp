#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, d, N;
	cin>>N;
	for(a=N; a>=1; a--){
		for(b=N-a; b>=1; b--){
			cout<<" ";
		}
		for(c=2*(a-1)+1; c>=1; c--){
			cout<<char (64+a);
		}
		cout<<"\n";
	} 
	return 0;
}
