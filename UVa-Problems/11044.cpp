// UVa Problem 11044: Searching for Nessy
// Accepted: 6/5/2020
// Runtime: 0s

#include <iostream>
#include <cstdio>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	for (unsigned int i = 0; i < c; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		cout << (a / 3) * (b / 3) << '\n';
	}
}
