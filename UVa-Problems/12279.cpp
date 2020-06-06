// UVa 12279: Emoogle Balance
// Solved: 6/6/2020
// Runtime: 0s

#include <iostream>
using namespace std;

int main() {
	int count = 1;
	while(true) {
		int num;
		cin >> num;

		if (num == 0) {
			break;
		}
		
		int given = 0;
	 	int notG = 0;

		for (unsigned int i = 0; i < num; i++) {
			int cur;
			cin >> cur;
			if (cur > 0) {
				given += 1;
			} else {
				notG++;
			}
		}
		cout << "Case " << count << ": " << (given - notG) << "\n";
		count++;
	}
}
