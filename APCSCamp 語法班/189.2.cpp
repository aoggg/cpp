#include<iostream>
#include<cmath>
using namespace std;

long long prime[10000005];
bool is_not_prime[10000005];

int main(){
	long long N, num, i, j, time;
	cin>>N;
	i=1;
	for(num=2; num<=N; num++){
		if(!is_not_prime[num]){
			prime[i]=num;
			for(time=1; time*num<=N; time++){
				is_not_prime[time*prime[i]]=true;
			}
			i++;
		}
	}
	cout<<i-1<<"\n";
	return 0;
}
