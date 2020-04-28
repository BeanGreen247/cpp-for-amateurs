#include <iostream>

using namespace std;

int main() {
	int numArr[9] = {1,2,3,4,5,6,7,8,9};
	
	for (int i=0; i<=8; i++) {
		cout << numArr[i] << endl;
	}
	
	//cout << numArr[0] << endl;
	//cout << numArr[1] << endl;
	//cout << numArr[2] << endl;
	
	int len = sizeof(numArr)/sizeof(numArr[0]);
	cout << "Size of numArr array: " << sizeof(numArr) << endl;
	cout << "Size of first element in numArr array: " << sizeof(numArr[0]) << endl;
	cout << "Number of items in numArr array: " << len << endl;
	
	return 0;
}