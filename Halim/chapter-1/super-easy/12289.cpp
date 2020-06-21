// UVa 12289: One-Two-Three
// Accepted: 6/6/2020
// Runtime: 0s

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int testOne(string word) {
	int count = 0;
	if (word.at(0) == 'o') {
		count += 1;
	}
	if (word.at(1) == 'n') {
		count += 1;
	}
	if (word.at(2) == 'e') {
		count += 1;
	}
	
	return count;
} 

int main() {
	string one = "one";
	string two = "two";
	string three = "three";
	int c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		string word;
		cin >> word;
		if (word.length() == 3) {
			if (testOne(word) < 2) {
				cout << "2\n";
			} else {
				cout << "1\n";
			}
		} else {
			cout << "3\n";
		}	
	}
}
