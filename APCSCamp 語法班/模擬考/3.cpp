#include<iostream>
using namespace std;

string s[1005], t[1005];

int main(){
	long long l, N, K, i;
	string c;
	cin>>N>>K;
	for(i=1; i<=N; i++){
		cin>>s[i]>>t[i];
	}
	cin>>c;
	l=c.size();
	for(i=0; i<l; i++){
		if(c[i]+K>='z'){
			c[i]=c[i]+K-'z'+'a'-1;
		}
		else{
			c[i]+=K;
		}
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
			c[i]=' ';
		}
	}
	long long j=0;
	while(j<l){
		for(j+=1; c[j]!=0; j++){
			for(i=1; i<=N; i++){
				if(c[j]!=s[i][j]){
					break;
				}
			}
			cout<<s[i];
		}
	}
	return 0;
}
