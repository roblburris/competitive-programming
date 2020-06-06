// UVa 12250: Language Detection
// Solved: 6/6/2020
// Runtime: 0s

#include <iostream>
#include <string>
using namespace std;

int main() {
	string eng = "HELLO";
	string span = "HOLA";
	string germ = "HALLO";
	string fren = "BONJOUR";
	string ital = "CIAO";
	string rus = "ZDRAVSTVUJTE";	
	int count = 1;

	while(true) {
		string cur;
		cin >> cur;
		if (cur.compare("#") == 0) {
			break;
		}
		cout << "Case " << count <<  ": ";
		if (cur.compare(eng) == 0) {
			cout << "ENGLISH\n";
		} else if (cur.compare(span) == 0) {
			cout << "SPANISH\n";
		} else if (cur.compare(germ) == 0) {
			cout << "GERMAN\n";
		} else if (cur.compare(ital) == 0) {
			cout << "ITALIAN\n";
		} else if (cur.compare(rus) == 0) {
			cout << "RUSSIAN\n";
		} else if (cur.compare(fren) == 0) {
			cout << "FRENCH\n"; 
		} else {
			cout << "UNKNOWN\n";
		}
		count++;
	}
}

			
