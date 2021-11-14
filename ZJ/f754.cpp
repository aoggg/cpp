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
				cout<<"第"<<i<<"位 : "<<"拿"<<M/K+M%K<<"元並說DD! BAD!\n"; 
			}
			else{
				cout<<"第"<<i<<"位 : "<<"拿"<<M/K<<"元並說DD! BAD!\n"; 
			}
		}
	}
	return 0;
}
