#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string xs;
	cin >> xs;

	vector<int> ys(xs.size());
	int s = 0;

	do {
		s++;
		for (int i = 0; i < xs.size(); i++) {
			ys[i] += xs[i] - '0';
		}
	} while (cin >> xs);

	int g = 0, e = 0;
	for (int y : ys) {
		g <<= 1;
		e <<= 1;
		g += y > s - y;
		e += y < s - y;
	}

	cout << g * e << endl;
}
