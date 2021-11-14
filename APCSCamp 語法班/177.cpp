#include<bits/stdc++.h>
using namespace std;

int main(){
	long long A1, B1, C1, A2, B2, C2, n, moon, dragon, num1, num2, sum, max;
	cin>>A1>>B1>>C1;
	cin>>A2>>B2>>C2;
	cin>>n;
	moon=0;
	while(moon<=n){
		dragon=n-moon;
		num1=(A1*moon*moon)+B1*moon+C1;
		num2=(A2*dragon*dragon)+B2*dragon+C2;
		sum=num1+num2;
		if(moon==0){
			max=sum;
		}
		else{
			if(max<=sum){
				max=sum;
			}
		}
		moon++;
	}
	cout<<max<<"\n";
	return 0;
}
