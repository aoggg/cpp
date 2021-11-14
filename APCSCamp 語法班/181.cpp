#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, day, time1, time2;
	cin>>n;
	for(day=1; day<=n; day++){
			for(time1=n-day; time1>=1; time1--){
				cout<<"_";
			}
			for(time2=1; time2<=day; time2++){
				cout<<"+";
			}
		cout<<"\n";
	}
	return 0;
}
