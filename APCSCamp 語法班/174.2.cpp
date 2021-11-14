#include<bits/stdc++.h>
using namespace std;

main(){
	unsigned long long n, x, max, second, time;
	cin>>n;
	max=0;
	second=0;
	for(time=1; time<=n; time++){
		cin>>x;
		if(max>x){
			if(second<=x){
				second=x;
			}
		}
		else{
			second=max;
			max=x;
		}
	}
	cout<<second<<"\n";
	return 0;
}
