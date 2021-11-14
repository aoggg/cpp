#include<iostream>
using namespace std;

int main(){
	long long N, A1, A2, A3, B1, B2, Atime, Btime, ans, beautyA, beautyB; 
	cin>>N>>A1>>A2>>A3>>B1>>B2;
	for(Atime=0; Atime<=N; Atime++){
		for(Btime=N-Atime; Btime>=0; Btime--){
			beautyA=A2*Atime-A1*Atime*Atime-A3;
			long long b1, b2;
			if(B1%(101-Btime)!=0){
				b1=B1/(101-Btime)+1;
			}
			else{
				b1=B1/(101-Btime);
			}
			if(B2%(Btime+1)!=0){
				b2=B2/(Btime+1)+1;
			}
			else{
				b2=B2/(Btime+1);
			}
			beautyB=b1+b2;
			if(Atime==0&&Btime==N){
				ans=beautyA+beautyB;
			}
			else if(ans<=beautyA+beautyB){
				ans=beautyA+beautyB;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
} 
