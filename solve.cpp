#include<iostream>
#include<vector>
using namespace std;

int t, n, ispa[1000][1000], dp[1000];
string s;

int main() {
	cin >> t;
	while (t--){
		cin >> s;
		n = s.length();
		for (int i = 0; i < n; i++){
			// Initialize the ispa matrix
			for (int j = 0; j < n; j++) {
				ispa[i][j] = 0;
				if (i == j) ispa[i][j] = 1;
			}
		}
		for (int i = 0; i+1 < n; i++){
			// Handle the case of substrings of length 2
			if (s[i] == s[i+1]) {
				ispa[i][i + 1] = 1;
			} else {
				ispa[i][i + 1] = 0;
			}
		}
		for (int l = 3; l <= n; l++){
			// Iterate over all substrings of length l
			for (int i = 0; i+l-1 < n; i++){
				// Check if the substring from i to i+l-1 is a palindrome
				if (s[i] == s[i+l-1]) {
					ispa[i][i + l - 1] = 1 * ispa[i + 1][i + l - 2];
				} else {
					ispa[i][i + l - 1] = 0;
				}
			}
		}
		dp[0] = 1;
		for (int i = 1; i < n; i++){
			dp[i] = i+1;
			if (ispa[0][i]) {
				dp[i] = 1;
			}
			for (int j = 0; j < i; j++){
				if (ispa[j+1][i]) {
					dp[i] = min(dp[i], dp[j] + 1);
				}
			}
		}
		cout << dp[n-1] << "";
	}

}