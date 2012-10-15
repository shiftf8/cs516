//P.146 Program #57
//Rob Lamog
//Comp 516

#include <iostream>

using namespace std;

int main () {
    int binNum[8];
	
	cout << "Enter an 8-bit binary #. Separate each digit by a space." << endl;
	cin >> binNum[0] >> binNum[1] >> binNum[2] >> binNum[3] >> binNum[4] >> binNum[5] >> binNum[6] >> binNum[7];
	cout << endl;
	
	int carry = 0;
	for (int i = 0; i < 10; i++) {
		if (binNum[7] == 1) carry = 1;
	
		for (int j = 7; j >= 0; j--) {
			if ((carry == 1) && (binNum[j] == 1)) {
				binNum[j] = 0;
				carry = 1;
			} else if ((carry == 1) && (binNum[j] == 0)) {
				binNum[j] = 1;
				carry = 0;
			} else if ((carry == 0) && (binNum[j] == 1)) {
				binNum[j] = 1;
				carry = 0;
			} else if ((carry == 0) && (binNum[j] == 0)) {
				binNum[j] = 0;
				carry = 0;
			}
		}

		for (int k = 0; k < 8; k++) {
			cout << binNum[k];
		}
		cout << endl;
		
		carry = 1; //To add one to the next loop.
	}
	
	return 0;
}