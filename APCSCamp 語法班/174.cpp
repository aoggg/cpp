#include<bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long N, time, score, first, second;
	cin>>N;
	time=1;
	first=0;
	second=0;
	while(time<=N){
		cin>>score;
		if(first>score){
			if(second<=score){
				second=score;
			}
		}
		else{
			second=first;
			first=score;
		}
		time++;
	}
	cout<<second<<"\n";
	return 0;
}
