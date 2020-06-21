// UVa 12403: Save Setu
// Accepted 6/6/2020
// Runtime: 0s

#include <iostream>
#include <string>
using namespace std;

int main() {
	int c;
	cin >> c;
	int total = 0;
	for (unsigned int i = 0; i < c; i++) {
		string cur;
		cin >> cur;
		if (cur.compare("donate") == 0) {
			int amount;
			cin >> amount;
			total += amount;
		} else {
			cout << total << "\n";
		}
	}
}
