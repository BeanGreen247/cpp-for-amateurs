#include <iostream>

using namespace std;

int main() {
	int num=0;
	while (num<=6) {
		cout << num << endl;
		num++;
	}
	
	do {
		cout << num << endl;
		num++;
	}while(num<=10);
	
	for (int i=0; i<10; i++) {
		cout << num << endl;
		num++;
	}
	
	return 0;
}