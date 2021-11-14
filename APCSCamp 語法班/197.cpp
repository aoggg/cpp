#include<iostream>
using namespace std;

long long arr[70];

int main(){
	unsigned long long N, time, m, l, i, ans, n, time1;
	string base, s;
	cin>>N;
	for(time=1; time<=N; time++){
		cin>>base;
		if(base=="Base10"){
			cin>>n;
			if(n==0){
				cout<<"0";
			} 
			for(time1=1; n!=0; time1++){
				arr[time1]=n%36;
				n/=36;
			}
			for(time1-=1; time1>=1; time1--){
				if(arr[time1]>9){
					cout<<(char)(arr[time1]-10+'A');
				}
				else{
					cout<<arr[time1];
				}
			}
		}
		else{
			cin>>s;
			l=s.size();
			ans=0;
			for(i=0; i<l; i++){
				long long num=(int)s[i];
				if(num>=65){
					num=num-65+10;
				}
				else{
					num=num-48+0;
				}
				for(time1=l-i-1; time1>=1; time1--){
					num*=36;
				}
				ans+=num;
			}
			cout<<ans;
		}
		cout<<"\n";
	}
	return 0;
}
