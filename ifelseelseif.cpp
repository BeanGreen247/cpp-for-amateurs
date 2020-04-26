#include <iostream>

using namespace std;

int main() {
	int num,num1;
	cout << "Type in a number:";
	cin >> num;
	cout << "Type in a number:";
	cin >> num1;
	if (num > num1) {
		cout << "The first number is bigger than the second number." << endl;
	}
	else if (num < num1) {
		cout << "The second number is bigger than the first number." << endl;
	}
	else {
		cout << "The numbers are the same." << endl;
	}
	return 0;
}