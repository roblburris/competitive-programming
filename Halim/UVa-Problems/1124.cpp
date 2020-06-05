#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

/* 
	UVa 1124: Celebrity Jeopardy
	Solved: 6/5/2020
*/

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
 
