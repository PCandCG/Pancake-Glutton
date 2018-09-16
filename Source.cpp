#include <iostream>
#include <vector>
using namespace std;

int getHighestPosition(vector<int> dataArray) {
	int count = 0;
	int currHighestPos = 0;
	for (count = 0; count < 10; count++) {
		cout << "Count:" << count << endl;
		if (dataArray[count] >= dataArray[currHighestPos]) {
			currHighestPos = count;
			cout << "CHP:" << currHighestPos << endl;
		}
	}
	return currHighestPos;
}


int main() {
	int count = 0;
	int inputValue;
	vector<int> pancakeArray;
	for (count = 0; count < 10; count++) {
		cout << "Enter number of pancakes for person " << count + 1 << ":";
		cin >> inputValue;
		pancakeArray.push_back(inputValue);
	}
	for (count = 0; count < 10; count++) {
		cout << pancakeArray[count] << endl;
	}
	int highestPos = getHighestPosition(pancakeArray);
	cout << "Person " << highestPos << ": " << pancakeArray[highestPos]  << " pancakes" << endl;
	system("PAUSE");
}