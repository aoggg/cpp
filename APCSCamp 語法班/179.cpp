#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, time1, time2, time3, ans;
	cin>>n>>m;
	for(time1=0; time1<=n; time1++){
		cout<<"1\t";
		for(time2=1; time2<=m; time2++){
			ans=1;
			for(time3=1; time3<=time2; time3++){
				ans*=time1;
			}
			cout<<ans;
			if(time2!=m){
				cout<<"\t";
			}
			else{
				cout<<"\n";
			}
		}
	}
	return 0;
}
