// UVa Problem 10550: Combination Lock
// Accepted: 6/6/2020
// Runtime: 0s

#include <iostream>
#include <cstdio>
#include <vector>
#include <stdlib.h> 
using namespace std;

int main() {
	vector < vector<int> > vals;
	int sum = 0;
	while (true) {
		vector<int> temp;
		for (unsigned int i = 0; i < 4; i++) {
			int c;	
			cin >> c;
			sum += c;
			temp.push_back(c);
		}
		
		if (sum == 0) {
			break;
		}
		
		vals.push_back(temp);
		sum = 0;
	}
	
	for (unsigned int i = 0; i < vals.size(); i++) {
		int sumDeg = 0;
		int s1 = vals.at(i).at(0) - vals.at(i).at(1);
		int s2 = vals.at(i).at(2) - vals.at(i).at(1);
		int s3 = vals.at(i).at(2) - vals.at(i).at(3);
		sumDeg += s1 >= 0 ? s1 * 9 : (40 + s1) * 9;
		sumDeg += s2 >= 0 ? s2 * 9 : (40 + s2) * 9;
		sumDeg += s3 >= 0 ? s3 * 9 : (40 + s3) * 9;
		cout << sumDeg + 1080 << '\n';
	}
}	
