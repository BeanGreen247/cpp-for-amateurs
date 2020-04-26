#include <iostream>

using namespace std;

int main() {
	int num;
	string text;
	cout << "Type in a text: ";
	getline (cin, text);
	cout << "Our text is -" << text << "-.";
	cout << "\nType in a number: ";
	cin >> num;
	cout << "Our number is -" << num << "-.";
	return 0;
}