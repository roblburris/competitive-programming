// UVa: 11547: Automatic Answer
// Accepted: 6/5/2020
// Runtime: 0s

#include <iostream>
#include <cstdio>
#include <vector>
#include <stdlib.h> 
using namespace std;

int main() {
	int n;
	cin >> n;
	for (unsigned int i = 0; i < n; i++) {
		int given;
		cin >> given;
		cout << ((abs((((given * 63) + 7492) * 5 - 498)) % 100) - (abs((((given * 63) + 7492) * 5 - 498)) % 10)) / 10 << '\n';
	}
}
