// UVa 12372: Packing for Holiday
// Accepted: 6/6/2020
// Runtime: 0s

#include <iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	for (unsigned int i = 1; i <= c; i++) {
		int d, e, f;
		cin >> d >> e >> f;
		cout << "Case " << i << ": "; 
		if (d <= 20 && e <= 20 && f <= 20) {
			cout << "good\n";
		} else {
			cout << "bad\n";
		}
	}
}
