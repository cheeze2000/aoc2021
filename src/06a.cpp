#include <bits/stdc++.h>
using namespace std;

vector<int> f(vector<int>& xs) {
	vector<int> ans(9);
	for (int i = 0; i < 9; i++) {
		if (i > 0) {
			ans[i - 1] += xs[i];
		} else {
			ans[6] += xs[0];
			ans[8] += xs[0];
		}
	}

	return ans;
}

int main() {
	vector<int> xs(9);

	int n; char c;
	while (scanf("%d%c", &n, &c) == 2) {
		xs[n]++;
		if (c != ',') break;
	}

	n = 80;
	while (n--) xs = f(xs);

	int s = 0;
	for (int x : xs) s += x;
	printf("%d\n", s);
}
