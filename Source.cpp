#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getHighestPosition(vector<int> dataArray) {
	int count = 0;
	int currHighestPos = 0;
	for (count = 0; count < dataArray.size(); count++) {
		if (dataArray[count] >= dataArray[currHighestPos]) {
			currHighestPos = count;
		}
	}
	return currHighestPos;
}

int getLowestPosition(vector<int> dataArray) {
	int count = 0;
	int currLowestPos = 0;
	for (count = 0; count < dataArray.size(); count++) {
		if (dataArray[count] <= dataArray[currLowestPos]) {
			currLowestPos = count;
		}
	}
	return currLowestPos;
}

int sortAndDisplay(vector<int> dataArray, vector<int> personArray) {
	int currPos = getHighestPosition(dataArray);
	cout << "Person: " << currPos << endl << dataArray[currPos] << " Pancakes" << endl << "======================================" << endl;
	return 0;
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
	int highestPos = getHighestPosition(pancakeArray);
	int lowestPos = getLowestPosition(pancakeArray);
	cout << "Person " << highestPos+1 << ": " << pancakeArray[highestPos]  << " pancakes" << endl;
	cout << "Person " << lowestPos + 1 << ": " << pancakeArray[lowestPos] << " pancakes" << endl;
	vector<int> personArray = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (count = 0; count < 10; count++) {
		sortAndDisplay(pancakeArray, personArray);
		personArray.erase(personArray.begin() + getHighestPosition(pancakeArray));
		pancakeArray.erase(pancakeArray.begin() + getHighestPosition(pancakeArray));
	}
	system("PAUSE");
}