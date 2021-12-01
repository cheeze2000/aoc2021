#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int ans = 0;
	int a;
	cin >> a;

	int b;
	while (cin >> b) {
		ans += a < b;
		a = b;
	}

	cout << ans << endl;
}
