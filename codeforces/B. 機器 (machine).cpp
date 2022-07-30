#include <vector>

int query(int l, int r);
int sum[5005];
std::vector<int> ans;

std::vector<int> revert(int n) {
	sum[0] = query(0, n - 1);
	for (int i = 1; i < n - 1; i++) {
		sum[i] = query(i, n - 1);
		ans.push_back(sum[i - 1] - sum[i]);
	}
	sum[n] = query(0, n - 2);
	int last = sum[0] - sum[n];
	ans.push_back(sum[n - 2] - last);
	ans.push_back(last);
	return ans;
}