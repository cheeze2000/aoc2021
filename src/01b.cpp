#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int ans = 0;
	int a, b, c;
	cin >> a >> b >> c;

	int d;
	while (cin >> d) {
		ans += a < d;
		a = b;
		b = c;
		c = d;
	}

	cout << ans << endl;
}
