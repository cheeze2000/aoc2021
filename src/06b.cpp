#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> f(vector<ll>& xs) {
	vector<ll> ans(9);
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
	vector<ll> xs(9);

	int n; char c;
	while (scanf("%d%c", &n, &c) == 2) {
		xs[n]++;
		if (c != ',') break;
	}

	n = 256;
	while (n--) xs = f(xs);

	long long s = 0;
	for (ll x : xs) s += x;
	printf("%lld\n", s);
}
