#include <iostream>
#include <cstdio>
#include <vector>
#include <stdlib.h> 
using namespace std;

int main() {
	vector < vector<int> > vals;
	int sum = 0;
	while (!cin.eof()) {
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
		float sumDeg = 1080;
		sumDeg += abs(40 - abs(vals.at(i).at(1) - vals.at(i).at(0))) * 1.0 / 40 * 360; 
		sumDeg += abs(40 - abs(vals.at(i).at(2) - vals.at(i).at(1))) * 1.0 / 40 * 360;
		sumDeg += abs(40 - abs(vals.at(i).at(3) - vals.at(i).at(2))) * 1.0 / 40 * 360;
       	cout << sumDeg << "\n";
	}
}	
