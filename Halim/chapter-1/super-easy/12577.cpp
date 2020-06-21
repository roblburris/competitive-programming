// UVa 12577: Haji-e-Akbar
// Accepted: 6/6/2020
// Runtime: 0s

#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 1;
	while (true) {
		string c;
		cin >> c;
		if (c.compare("*") == 0) {
			break;
		} 
		cout << "Case " << count << ": "; 
		if (c.compare("Hajj") == 0) {
			cout << "Hajj-e-Akbar\n";
		} else {
			cout << "Hajj-e-Asghar\n";
		}
		count += 1;
	}
}		
