#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string xs;
	int x;

	ll p = 0, d = 0;
	ll aim = 0;
	while (cin >> xs >> x) {
		switch (xs[0]) {
			case 'd':
				aim += x;
				break;
			case 'u':
				aim -= x;
				break;
			default:
				p += x;
				d += aim * x;
		}
	}

	cout << p * d << endl;
}
