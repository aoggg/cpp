#include<iostream>
#include<algorithm>
using namespace std;

long long score[25];

int main(){
	long long n, time, last, time1, time2, worst_case, best_case;
	cin>>n;
	best_case=worst_case=-1;
	for(time=1; time<=n; time++){
		cin>>score[time];
	}
	for(time=1; time<n; time++){
		for(time1=n-1; time1>=time; time1--){
			if(score[time1]>=score[time1+1]){
				swap(score[time1], score[time1+1]);
			}
		}
	}
	for(time=1; time<=n&&score[time]<60; time++){
		best_case=score[time];
	}
	for(time=n; time>=1&&score[time]>=60; time--){
		worst_case=score[time];
	}
	for(time=1; time<=n; time++){
		cout<<score[time];
		if(time!=n){
			cout<<" ";
		}
		else{
			cout<<"\n";
		}
	}
	if(best_case!=-1){
		cout<<best_case<<"\n";
	}
	else{
		cout<<"best case\n";
	}
	if(worst_case!=-1){
		cout<<worst_case<<"\n";
	}
	else{
		cout<<"worst case\n";
	}
	return 0;
}
