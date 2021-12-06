#include <bits/stdc++.h>
using namespace std;

bool check(vector<bool>& ys, int k) {
	int a = k / 5, b = k % 5;

	bool f = true;
	for (int i = 0; i < 5; i++) f &= ys[i * 5 + b];
	if (f) return true;

	f = true;
	for (int j = 0; j < 5; j++) f &= ys[a * 5 + j];
	return f;
}

int main() {
	vector<int> xs;
	vector<bool> ys(25);

	int n; char c;
	while (scanf("%d%c", &n, &c)) {
		xs.push_back(n);
		if (c != ',') break;
	}

	int t = INT_MAX, ans;
	while (scanf("%d", &n) == 1) {
		int s = n;
		map<int, int> zs = { { n, 0 } };
		for (int i = 1; i < 25; i++) {
			scanf("%d", &n);
			s += n;
			zs[n] = i;
		}

		int c = 0;
		for (int x : xs) {
			c++;
			if (!zs.count(x)) continue;

			s -= x;
			int k = zs[x];
			ys[k] = true;
			if (!check(ys, k)) continue;
			if (c > t) break;

			if (c == t) {
				ans = max(ans, s * x);
			} else {
				t = c;
				ans = s * x;
			}

			break;
		}

		fill(ys.begin(), ys.end(), false);
	}

	printf("%d\n", ans);
}
