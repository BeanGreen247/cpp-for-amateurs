#include <iostream>

using namespace std;

int main() {
	float x, y, sum, sub, mul, div;
	cout << "Type in a number:";
	cin >> x;
	cout << "Type in a another number:";
	cin >> y;
	sum = x + y;
	sub = x - y;
	mul = x * y;
	div = x / y;
	cout << "\nThe sum is " << sum;
	cout << "\nThe sub is " << sub;
	cout << "\nThe mul is " << mul;
	cout << "\nThe div is " << div;
	return 0;
}