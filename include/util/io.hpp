#pragma once

#include <bits/stdc++.h>
using namespace std;

string read_line() {
	string xs;
	getline(cin, xs);
	return xs;
}

vector<string> read_line(char delim) {
	stringstream ss(read_line());
	vector<string> xs;
	string x;
	while (getline(ss, x, delim)) {
		xs.push_back(x);
	}

	return xs;
}
