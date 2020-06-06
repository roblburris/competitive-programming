// UVa 11727: Cost Cutting
// Solved: 6/5/2020
// Runtime: 0s

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (unsigned int i = 1; i <= a; i++) {
		int d, e, f;
		cin >> d >> e >> f;
		int sum = d + e + f;
		cout << "Case " << i << ": " << sum - std::max(d, max(e, f)) - std::min(d, min(e, f)) << '\n';
	}
}
