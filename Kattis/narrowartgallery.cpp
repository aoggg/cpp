// Problem: Narrow Art Gallery
// Contest: Kattis
// URL: https://open.kattis.com/problems/narrowartgallery
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 205;
const int L = 0, R = 1, BOTH = 2;

int room[MAXN][2], opened[MAXN][MAXN][3];

int main() {
    int N, k;
    while (cin >> N >> k) {
        if (N == 0 && k == 0) {
            break;
        }
        
        //init
        for (int i = 0; i < MAXN; i++) {
            for (int j = 0; j < 2; j++) {
                room[i][j] = 0;
            }
            for (int j = 0; j < MAXN; j++) {
                for (int k = 0; k < 3; k++) {
                    opened[i][j][k] = -1e9;
                }
            }
        }
        
        //input
        for (int i = 0; i < N; i++) {
            cin >> room[i][L] >> room[i][R];
        }
        
        opened[0][0][BOTH] = room[0][R] + room[0][L];
        opened[0][1][L] = room[0][L];
        opened[0][1][R] = room[0][R];
        for (int i = 1; i < N; i++) {
            for (int j = 0; j <= min(i + 1, k); j++) {
                opened[i][j][BOTH] = max({opened[i - 1][j][BOTH], opened[i - 1][j][L], opened[i - 1][j][R]}) + room[i][R] + room[i][L];
                if (j != 0) {
                    opened[i][j][L] = max(opened[i - 1][j - 1][BOTH], opened[i - 1][j - 1][L]) + room[i][L];
                    opened[i][j][R] = max(opened[i - 1][j - 1][BOTH], opened[i - 1][j - 1][R]) + room[i][R];
                }
            }
        }
        
        //output
        cout << max({opened[N - 1][k][BOTH], opened[N - 1][k][L], opened[N - 1][k][R]}) << '\n';
    }
    return 0;
}