#include<iostream>
using namespace std;

int main(){
	long long N, K, time, i, l;
	string S;
	cin>>N;
	for(time=1; time<=N; time++){
		cin>>S>>K;
		l=S.size();
		for(i=0; i<l; i++){
			long long num=S[i];
			if(num+K>'Z'){
				num=num+K-'Z'+'A'-1;
			}
			else{
				num+=K;
			}
			cout<<(char)num;
		}
		cout<<"\n";
	}
	return 0;
}
