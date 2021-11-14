#include<iostream>
using namespace std;

string target;
char cube[55][55];

int main(){
	int N;
	cin >> N;
	for ( int times = 0; times < N; times++ ){
		if ( times != 0 ){
			cout << '\n';
		}
		int m, n;
		cin >> m >> n;
		for ( int i = 0; i < m; i++ ){
			for ( int j = 0; j < n; j++ ){
				cin >> cube[i][j];
				if ( cube[i][j] >= 'A' && cube[i][j] <= 'Z' ){
					cube[i][j] += 'a' - 'A';
				}
			}
		}
		int k;
		cin >> k;
		for ( int time = 0; time < k; time++ ){
			cin >> target;
			for ( int i = 0; i < target.size(); i++ ){
				if ( target[i] >= 'A' && target[i] <= 'Z' ){
					target[i] += 'a' - 'A';
				}
			}
			bool found = false;
			for ( int i = 0; i < m && !found; i++ ){
				for ( int j = 0; j < n && !found; j++ ){
					if ( i <= m - target.size() && j <= n - target.size() ){
						found = true;
						for ( int k = 0; k < target.size(); k++ ){
							if ( cube[i + k][j + k] != target[k] ){
								found = false;
								break;
							}
						}
					}
					if ( i >= target.size() - 1 && j >=  target.size() - 1 && !found ){
						found = true;
						for ( int k = 0; k < target.size(); k++ ){
							if ( cube[i - k][j - k] != target[k] ){
								found = false;
								break;
							}
						}
					}
					if ( i >= target.size() - 1 && j <= n - target.size() && !found ){
						found = true;
						for ( int k = 0; k < target.size(); k++ ){
							if ( cube[i - k][j + k] != target[k] ){
								found = false;
								break;
							}
						}
					}
					if ( i <= m - target.size() && j >= target.size() - 1 && !found ){
						found = true;
						for ( int k = 0; k < target.size(); k++ ){
							if ( cube[i + k][j - k] != target[k] ){
								found = false;
								break;
							}
						}
					}
					if ( i <= m - target.size() && !found ){
						found = true;
						for ( int k = 0; k < target.size(); k++ ){
							if ( cube[i + k][j] != target[k] ){
								found = false;
								break;
							}
						}
					}
					if ( i >= target.size() - 1 && !found ){
						found = true;
						for ( int k = 0; k < target.size(); k++ ){
							if ( cube[i - k][j] != target[k] ){
								found = false;
								break;
							}
						}
					}
					if ( j >= target.size() - 1 && !found ){
						found = true;
						for ( int k = 0; k < target.size(); k++ ){
							if ( cube[i][j - k] != target[k] ){
								found = false;
								break;
							}
						}
					}
					if ( j <= n - target.size() && !found ){
						found = true;
						for ( int k = 0; k < target.size(); k++ ){
							if ( cube[i][j + k] != target[k] ){
								found = false;
								break;
							}
						}
					}
					if ( found ){
						cout << i + 1 << ' ' << j + 1 << '\n';
					}
				}
			}
		}
	}
	return 0;
}
