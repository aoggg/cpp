#include<iostream>
using namespace std;

double xmin[10], ymax[10], xmax[10], ymin[10];

int main(){
	char r;
	int rnum = 0;
	double x, y;
	for ( rnum = 0; cin >> r; rnum++ ){
		if ( r == '*' ){
			break;
		}
		cin >> xmin[rnum] >> ymax[rnum] >> xmax[rnum] >> ymin[rnum];
	}
	for ( int times = 1; cin >> x >> y; times++ ){
		if ( x == y && x == 9999.9 ){
			break;
		}
		bool contained = false;
		for ( int i = 0; i < rnum; i++ ){
			if ( x > xmin[i] && x < xmax[i] && y > ymin[i] && y < ymax[i] ){
				cout << "Point " << times << " is contained in figure " << i + 1 << '\n';
				contained = true;
			}
		}
		if ( !contained ){
			cout << "Point " << times << " is not contained in any figure\n";

		}
	}
	return 0;
}
