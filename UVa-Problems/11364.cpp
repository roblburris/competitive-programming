// UVa Problem 11364: Parking
// Accepted: 6/5/2020
// Runtime: 0s

#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	for (unsigned int i = 0; i < c; i++) {
		int a, first;
		cin >> a >> first;
		int min = first, max = first;
		for (unsigned int j = 1; j < a; j++) {
			int b;
			cin >> b;
			if (b < min) {
				min = b;
			} else if (b > max) {
				max = b;
			}
		}
		cout <<  2 * (max - min) << '\n';
	} 
}
