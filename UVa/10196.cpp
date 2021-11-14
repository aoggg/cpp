#include<iostream>
using namespace std;

string table[8];

int main(){
	for ( int time = 1; cin >> table[0]; time++ ){
		bool have_checks = false, wc = false, bc = false;//wc - white_check, bc - black_check
		for ( int i = 1; i < 8; i++ ){
			cin >> table[i];
		}
		for ( int i = 0; i < 8 && !wc && ! bc; i++ ){
			for ( int j = 0; j < 8 && !wc && !bc; j++ ){
				if ( table[i][j] != '.' ){
					have_checks = true;
					if ( table[i][j] >= 'a' && table[i][j] <= 'z' ){
						if ( table[i][j] == 'p' ){
							if ( i + 1 < 8 && ( ( j != 0 && table[i + 1][j - 1] == 'K' ) || ( j + 1 < 8 && table[i + 1][j + 1] == 'K' ) ) ){
								wc = true;
								break;
							}
						}
						else if ( table[i][j] == 'r' ){
							for ( int k = i - 1; k >= 0; k-- ){
								if ( table[k][j] != '.' ){
									if ( table[k][j] == 'K' ){
										wc = true;
									}
									break;
								}
							}
							for ( int k = i + 1; k < 8; k++ ){
								if ( table[k][j] != '.' ){
									if ( table[k][j] == 'K' ){
										wc = true;
									}
									break;
								}
							}
							for ( int k = j + 1; k < 8; k++ ){
								if ( table[i][k] != '.' ){
									if ( table[i][k] == 'K' ){
										wc = true;
									}
									break;
								}
							}
							for ( int k = j - 1; k >= 0; k-- ){
								if ( table[i][k] != '.' ){
									if ( table[i][k] == 'K' ){
										wc = true;
									}
									break;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
