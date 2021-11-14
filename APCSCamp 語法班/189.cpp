#include<iostream>
using namespace std;

long long prime[10000005];
bool is_not_prime[10000005];

int main(){
	long long N, num, i, j;
	cin>>N;
	i=1;
	for(num=2; num<=N; num++){
		if(!is_not_prime[num]){
			prime[i]=num;
			i++;
		}
		for(j=1; num*prime[j]<=N; j++){
			is_not_prime[num*prime[j]]=true;
			if(num%prime[j]==0){
				break;
			}
		}
	} 
	cout<<i-1<<"\n";
	return 0;
}
