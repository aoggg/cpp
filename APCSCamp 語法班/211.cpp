#include<iostream>
using namespace std;

int city[55][55], people[55][55];

int main(){
	int R, C, k, m;
	cin>>R>>C>>k>>m;
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			cin>>city[i][j];
		}
	}
	for(int day=1; day<=m; day++){
		for(int i=1; i<=R; i++){
			for(int j=1; j<=C; j++){
                int have_city=0;
				if(city[i][j]!=-1){
					if(i!=1&&city[i-1][j]!=-1){
						people[i-1][j]+=city[i][j]/k;
						have_city++;
					}
                    if(j!=1&&city[i][j-1]!=-1){
                        people[i][j-1]+=city[i][j]/k;
						have_city++;
                    }
                    if(i!=R&&city[i+1][j]!=-1){
                        people[i+1][j]+=city[i][j]/k;
                        have_city++;
                    }
                    if(j!=C&&city[i][j+1]!=-1){
                    	people[i][j+1]+=city[i][j]/k;
                    	have_city++;
                    }
					people[i][j]-=(city[i][j]/k)*have_city;
				}
			}
		}
		for(int i=1; i<=R; i++){
			for(int j=1; j<=C; j++){
					city[i][j]+=people[i][j];
					people[i][j]=0;
			}
		}
	}
	int least=105, biggest=0;
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			if(city[i][j]!=-1){
				if(least>city[i][j]){
					least=city[i][j];
				}
				if(biggest<city[i][j]){
					biggest=city[i][j];
				}
			}
		}
	}
	cout<<least<<'\n';
	cout<<biggest<<'\n';
	return 0;
}
