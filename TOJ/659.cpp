// TOJ 659

int query(int k);

int answer() {
	int times = 32;
	long long l = 0, r = 2147483647;
	while (times-- && l <= r) {
		long long m = (l + r) / 2;
		int re = query(m);
		if (re == 0) {
			return m;
		}
		if (re == 1) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return r;
}