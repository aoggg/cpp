#include<bits/stdc++.h>
using namespace std;

int main(){
	long long A, B, C, n, time, x, max, num1, num2, num3, sum;
	cin>>A>>B>>C>>n;
	x=0;
	while(x<=n){
		time=1;
		num1=A;
		while(time<=x){
			num1*=2;
			time++;
		}
		num2=B*x*x*x;
		num3=C*x;
		sum=num1+num2+num3;
		if(x==0){
			max=sum;
		}
		else{
			if(max<=sum){
				max=sum;
			}
		}
		x++;
	}
	cout<<max<<"\n";
	return 0;
}
