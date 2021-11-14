#include<iostream>
using namespace std;

long long a[10005], b[10005], c[20010];

int main(){
	long long n, m, time, i, j, k;
	cin>>n>>m;
	for(time=1; time<=n; time++){
		cin>>a[time];
	}
	for(time=1; time<=m; time++){
		cin>>b[time];
	}
	i=1;
	j=1;
	k=1;
	while(i<=n&&j<=m){
		if(a[i]<b[j]){
			c[k]=a[i];
			i++;
		}
		else{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<=n){
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<=m){
		c[k]=b[j];
		j++;
		k++;
	}
	for(time=1; time<=n+m; time++){
		cout<<c[time];
		if(time!=n+m){
			cout<<" ";
		}
		else{
			cout<<"\n";
		}
	}
	return 0;
} 
