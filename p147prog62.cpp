//P.147 Program #62
//Rob Lamog
//Comp 516

#include <iostream>

using namespace std;

int main () {
    int binNum[8];
	double dec;
	
	cout << "Enter a decimal value to calculate." << endl;
	cin >> dec;
	
	cout << dec << endl << endl;
	
	double carry = 0.0;
	for (int i = 0; i < 8; i++) {
		if (i == 0) carry = dec * 2;
		else carry = carry * 2;
		
		if (carry == 2) {
			cout << "Conversion ends at position binNum[" << i - 1 << "]: ";
			break;
		} else if (carry > 1) {
			binNum[i] = 1;
			carry--;
		} else if (carry == 1) binNum[i] = 1;
		else binNum[i] = 0;
	}

	for (int k = 0; k < 8; k++) {
		cout << binNum[k];
	}
	cout << endl;
	
	return 0;
}

/*
Enter a decimal value to calculate.
0.585938

Conversion ends at position binNum[6]: 10010110
*/