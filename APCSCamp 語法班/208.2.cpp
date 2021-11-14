#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct place{
	int row;
	int column;
	int height;
};

bool need_change(place a, place b){
	return a.height<b.height;
}

place info[105][105];
vector<place> compare;
int flood[105][105];

int main(){
	int n, m, L;
	cin>>n>>m>>L;
	//2 2 10
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			info[i][j].row=i;
			info[i][j].column=j;
			cin>>info[i][j].height;
		}
		/* 0 1
		   1 0*/
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			compare.push_back(info[i][j]);
		}
	}
	sort(compare.begin(), compare.end(), need_change);
	int i=0;
	while(L>0&&i<n*m){
		//compare[4]={0, 0, 1, 1};
		if(i+1==n*m){
			flood[compare[i].row][compare[i].column]=1;
			i+=1;
		}
		else{
			for(i++; i<n*m&&compare[i].height==compare[i-1].height; i++){
				flood[compare[i-1].row][compare[i-1].column]=1;
				if(i==n*m-1){
					flood[compare[i].row][compare[i].column]=1;
				}
				//1st. compare[1].height==compare[0].height i=1->i=2;
				//2nd. compare[2].heignt!=compare[1].height break;
			}
			flood[compare[i-1].row][compare[i-1].column]=1;
		}
		//i=1-->i=2;
		int lower=1;
		if(i!=n*m-1){
			lower=compare[i].height-compare[i-1].height;
			//lower=compare[2].height-compare[1].height=1-0=1;
		}
		L-=lower*i;
		//L-=1*2;
	}
	for(int j=1; j<=n; j++){
		for(int k=1; k<=m; k++){
			cout<<flood[j][k];
			if(k!=m){
				cout<<' ';
			}
		}
		cout<<'\n';
	}
	return 0;
}
