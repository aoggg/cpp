#include<iostream>
using namespace std;

long long Nnum[1005], Mnum[1005], ans[2010];

int main(){
	long long N, M, op, i, num, j;
	string Ns, Ms;
	cin>>N>>M>>op;
	cin>>Ns>>Ms;
	for(i=0; i<N; i++){
		Nnum[N-i]=Ns[i]-'1'+1;
	}
	for(i=0; i<M; i++){
		Mnum[M-i]=Ms[i]-'1'+1;
	}
	for(i=1; i<=max(N, M); i++){
		if(op==0){
			if(ans[i]+Nnum[i]+Mnum[i]>=10){
				ans[i]+=Nnum[i]+Mnum[i]-10;
				ans[i+1]++;
			}
			else{
				ans[i]+=Nnum[i]+Mnum[i];
			}
		}
		else if(op==1){
			if(ans[i]+Nnum[i]-Mnum[i]<0){
				ans[i]+=Nnum[i]-Mnum[i]+10;
				ans[i+1]--;
			}
			else{
				ans[i]+=Nnum[i]-Mnum[i];
			}
		}
		else{
			for(j=1; j<=max(N, M); j++){
				ans[i+j]+=(ans[i+j-1]+Nnum[i]*Mnum[j])/10;
				ans[i+j-1]=(ans[i+j-1]+Nnum[i]*Mnum[j])%10;
			}
		}
	}
	for(num=N+M+1; ans[num]==0; num--);
	for(i=num; i>=1; i--){
		cout<<ans[i];
	}
	return 0;
}
