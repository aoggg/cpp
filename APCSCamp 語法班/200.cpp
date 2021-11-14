#include<iostream>
#include<string>
using namespace std;

int main(){
	long long N, l_after, l_before, time, i, j, k, place;
	string after, before;
	cin>>N;
	cin>>after;
	for(time=1; time<N; time++){
		cin>>before;
		l_after=after.size();
		l_before=before.size();
		place=0;
		if(l_after>l_before){
			place=l_after-l_before;
		}
		for(i=place; i<l_after; i++){
			bool right_place=true;
			for(j=i; j<l_after; j++){
				if(after[j]!=before[j-i]){
					right_place=false;
					break;
				}
			}
			if(right_place){
				after+=before.substr(j-i, l_before);
				break;
			}
			else if(i==l_after-1){
				after+=before.substr(0, l_before);
				break;
			}
		}
	}
	cout<<after<<endl;
	return 0;
} 
