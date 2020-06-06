// UVa Problem 11498: Division of Nlogonia
// Accepted: 6/5/2020
// Runtime: 0s

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
	while(true) {
		int a;
		cin >> a;
		if (a == 0) {
			break;
		}
		
		vector<int> center;
		for (unsigned int i = 0; i < 2; i++) {
			int temp;
			cin >> temp;
			center.push_back(temp);
		}
		
		for (unsigned int i = 0; i < a; i++) {
			int x, y;
			cin >> x >> y;
			if (x  == center.at(0) || y == center.at(1)) {
				cout << "divisa\n";
			} else if (x > center.at(0)) {
				if (y > center.at(1)) {
					cout << "NE\n";
				} else {
					cout << "SE\n";
				}
			} else {
				if (y > center.at(1)) {
					cout << "NO\n";
				} else {
					cout << "SO\n";
				}
		
			}
		}
	}
}
