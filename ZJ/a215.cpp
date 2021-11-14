#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, t, ans;
	while(cin>>n>>m){
		ans=n;
		t=n+1;
		while(ans<=m){
			ans+=t; 
			t++;
		} 
		cout<<t-n<<"\n";
	}
	return 0;
}
