#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

/*
	UVa Problem 00272: TeX Quotes
	Accepted 6/5/2020
*/

int main() {
	vector<char> text;
	char input;
	while (!cin.eof()) {
		input = cin.get();
		text.push_back(input);
	}
	int quotes;
	quotes = 0;
	
	for (unsigned int i = 0; i < text.size(); i++) {
		if (text.at(i) == '"') {
			if (quotes == 0) {
				cout << "``";
				quotes++;
			} else {
				cout << "''";
				quotes = 0;
			}
		} else {
			cout << text.at(i);	
		}
	}
}
