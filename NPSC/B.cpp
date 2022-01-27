#include <bits/stdc++.h>
using namespace std;

int def[400000],day[400000];

int main(){
	int n;
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>def[i];
	}
	for(int i=0;i<n;i++){
		cin>>day[i];
	}
	long long ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			day[j]--;
		}
		for(int j=0;j<n;j++){
			if(j>i) ans+=def[j];
			else if(day[j]<=0 && j<i) ans+=def[j];
		}
		if(i==n-1) ans+=def[i];
		cout<<ans<<' ';
		ans=0;
	}
	return 0;
}
