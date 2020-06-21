// UVa 00621: Secret Research
// Accepted: 6/6/2020
// Runtime: 

#include <iostream>
#include <math.h>
using namespace std;

int getNthDigit(long long int num, int place) {
	while (num / ((int) pow(10, place)) != 0) {
		num /= 10;
	}
	return num;
}

int main() {
	int c;
	cin >> c;
	for (unsigned int i = 0; i < c; i++) {
		long long int s;
		cin >> s;
		if (s == 1 || s == 4 || s == 78) {
			cout << "+" << endl;
		} else if (s % 100 == 35) {
			cout << "-" << endl;
		} else if (s % 10 == 4 && (int) (s / pow(10, (int) log10(s))) == 9) {
			cout << "*" << endl;
		} else {
			cout << "?" << endl;
		}
	}
}
