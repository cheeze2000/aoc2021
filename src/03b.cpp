#include <bits/stdc++.h>
using namespace std;

inline int bin(const string& xs) {
	return stoi(xs, nullptr, 2);
}

int reduce(vector<string> xs, bool f) {
	int i = 0;
	while (xs.size() > 1) {
		int s = 0;
		for (auto& x : xs) s += x[i] - '0';
		bool g = s >= xs.size() - s == f;

		vector<string> ys;
		for (auto& x : xs) {
			if (x[i] == '0' + g) ys.push_back(x);
		}

		xs = ys;
		i++;
	}

	return bin(xs[0]);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<string> xs;
	string s;
	while (cin >> s) xs.push_back(s);

	cout << reduce(xs, true) * reduce(xs, false) << endl;
}
