#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, M, K, n, i;
	cin>>N;
	for(n=1; n<=N; n++){
		cin>>M>>K;
		cout<<"Case "<<n<<" :\n";
		for(i=1; i<=K; i++){
			if(i==K){
				cout<<"��"<<i<<"�� : "<<"��"<<M/K+M%K<<"���û�DD! BAD!\n"; 
			}
			else{
				cout<<"��"<<i<<"�� : "<<"��"<<M/K<<"���û�DD! BAD!\n"; 
			}
		}
	}
	return 0;
}
