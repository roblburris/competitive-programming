#include <iostream>
#include <cstdio>
#include <vector>
#include <stdlib.h> 
using namespace std;

int main() {
	vector < vector<int> > vals;
	int sumDeg;
	sumDeg = 1080;
	int sum = 0;
	while (!cin.eof()) {
		vector<int> temp;
		int c;
		for (unsigned int i = 0; i < 4; i++) {
			cin >> c;
			sum += c;
			temp.push_back(c);
		}
		
		if (sum == 0) {
			break;
		}
		
		vals.push_back(temp);
	}
	
	for (unsigned int i = 0; i < vals.size(); i++) {
		sumDeg = 1080;
		sumDeg += ((40 - abs(vals.at(i).at(1) - vals.at(i).at(0))) / 40) * 360;
        sumDeg += ((40 - abs(vals.at(i).at(2) - vals.at(i).at(1))) / 40) * 360;
        sumDeg += ((40 - abs(vals.at(i).at(3) - vals.at(i).at(2))) / 40) * 360;
		if (sumDeg != 1080) {
        	cout << sumDeg << "\n";
        }
		sumDeg = 1080;
	}
}	
