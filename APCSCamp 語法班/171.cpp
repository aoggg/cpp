#include<bits/stdc++.h>
using namespace std;

unsigned LFSR() {
  static unsigned short lfsr = 44257;
  unsigned bit = ((lfsr >> 0) ^  (lfsr >> 2) ^  (lfsr >> 3) ^  (lfsr >> 5) ) & 1;
  return lfsr =  (lfsr >> 1) | (bit << 15);
}

int main(){
	long long n, k, a=0;
	cin>>n>>k;
	start:
		long long x=LFSR()%(n+1);
		if(x%k==0){
			goto start;
		}
		else{
			cout<<x<<"\n";
			a++;
			if(a<5){
				goto start;
			}
			else{
				;
			}
		}
	return 0;
}
