// UVa 11172: Relational Operators
// Accepted: 6/5/2020
// Runtime: 0s

#include<iostream>
#include<cstdio>
#include <stdlib.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	for (unsigned int i = 0; i < c; i++) {
		int a, b;
		cin >> a >> b;
		cout << (a - b == 0 ? "=" : (a-b < 0 ? "<" : ">")) << '\n';
	}
}
