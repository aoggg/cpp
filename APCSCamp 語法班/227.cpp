#include<iostream>
#define maxl 51
#define maxcolor 3
#define red 0
#define orange 1
#define blue 2
using namespace std;

bool visit[maxcolor][maxl];
long long DP[maxcolor][maxl];

long long rec(long long color, long long l){
    long long ans=0;
    if(l-1==0){
    	return 1;
	}
	else if(visit[color][l]){
		ans+=DP[color][l];
	}
	else{
		if(color==red){
			DP[red][l]+=rec(blue, l-1);
			visit[red][l]=true;
			ans+=DP[red][l];
		}
		else if(color==blue){
			DP[blue][l]+=rec(blue, l-1)+rec(red, l-1)+rec(orange, l-1);
			visit[blue][l]=true;
			ans+=DP[blue][l];
		}
		else{
			DP[orange][l]+=rec(red, l-1)+rec(blue, l-1);
			visit[orange][l]=true;
			ans+=DP[orange][l];
		}
	}
    return ans;
}

int main(){
    long long n;
    cin>>n;
    long long c=rec(red, n)+rec(blue, n)+rec(orange, n);
    cout<<c<<"\n";
    return 0;
}

