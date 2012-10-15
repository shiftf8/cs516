//P.147 Program #67
//Rob Lamog
//Comp 516

#include <iostream>

using namespace std;

int main() {
    char hexNum[4];
	
	cout << "Enter a 4-bit Hexadecimal #. Separate each digit by a space." << endl;
	cin >> hexNum[0] >> hexNum[1] >> hexNum [2] >> hexNum [3];
	cout << endl;
	
	for (int i = 0; i < 4; i++) {
		hexNum[i] = toupper(hexNum[i]);
		cout << hexNum[i];
	}
	cout << endl;
	
	int carry = 0;
	if (hexNum[3] == 'F') carry = 1;

	for (int i = 0; i < 10; i++) {		
		for (int j = 3; j >= 0; j--) {
			if (hexNum[j] == 'F') {
				hexNum[j] = '0';
				carry = 1;
			} else if (carry == 1) {
				if (hexNum[j] == '9') hexNum[j] = hexNum[j] + 8;
				else hexNum[j] = hexNum[j] + 1;
				carry = 0;
			} else {
				carry = 0;
			}
		}
		
		for (int k = 0; k < 4; k++) {
			cout << hexNum[k];
		}
		cout << endl;
		
		carry = 1;
	}
	
	return 0;
}