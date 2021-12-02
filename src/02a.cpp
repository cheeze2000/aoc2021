#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string xs;
	int x;

	int p = 0, d = 0;
	while (cin >> xs >> x) {
		switch (xs[0]) {
			case 'f':
				p += x;
				break;
			case 'd':
				d += x;
				break;
			default:
				d -= x;
		}
	}

	cout << p * d << endl;
}
