// UVa Problem 1124: Celebrity Jeopardy
// Accepted: 6/5/2020
// Runtime: 0s

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	vector<char> equations;
	char c;
	while (!cin.eof()) {
		c = cin.get();
		equations.push_back(c);
	}
	
	for (unsigned int i = 0; i < equations.size(); i++) {
		cout << equations.at(i);
	}
}
 
