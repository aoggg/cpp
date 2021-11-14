#include<iostream>
using namespace std;

struct info {
	int row;
	int column;
	int num;
};

int mn[105][105];
bool not_visited[105][105];

bool can_walk ( int row, int column ){
	return not_visited[row][column - 1] || not_visited[row][column + 1] || not_visited[row - 1][column] || not_visited[row + 1][column];
}

info smaller ( int small, int row, int column ){
	info smaller;
	if ( small.num > mn[row][column] ){
		smaller.row = row;
		smaller.column = column;
		smaller.num = mn[row][column];
	}
	else{
		smaller = small;
	}
	return smaller;
}

int main(){
	int m, n;
	info least;
	cin >> m >> n;
	for ( int i = 1; i <= m; i++ ){
		for ( int j = 1; j <= n; j++ ){
			cin >> mn[i][j];
			if ( i == 1 && j == 1 ){
				least.num = mn[i][j];
				least.row = i;
				least.column = j;
			}
			else if ( least.num >= mn[i][j] ){
				least.num = mn[i][j];
				least.row = i;
				least.column = j;
			}
			not_visited = true;
		}
	}
	not_visited[least.row][least.column] = false;
	while ( can_walk ( least.row, least,column ) ){
		info small;
		small.num = 0;
		if ( not_visited[least.row + 1][least.column] ){
			small = smaller ( small.num, least.row + 1, least.column );
		}
		if ( not_visited 
		
	return 0;
}
