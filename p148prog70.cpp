//P.148 Program #70
//Rob Lamog
//Comp 516

#include <iostream>

using namespace std;

int main() {
    int decNum, conHex[4];
	char hexNum[4];
	
	cout << "Enter a 4-bit Hexadecimal #. Separate each digit by a space." << endl;
	cin >> hexNum[0] >> hexNum[1] >> hexNum [2] >> hexNum [3];
	//cout << hexNum[0] << hexNum[1] << hexNum [2] << hexNum [3];
	cout << endl;
	
	for (int i = 3; i >= 0; i--) {
		hexNum[i] = toupper(hexNum[i]);
		conHex[i] = hexNum[i] - '0';	
		
		if (hexNum[i] == 'A') conHex[i] = 10;
		if (hexNum[i] == 'B') conHex[i] = 11;
		if (hexNum[i] == 'C') conHex[i] = 12;
		if (hexNum[i] == 'D') conHex[i] = 13;
		if (hexNum[i] == 'E') conHex[i] = 14;
		if (hexNum[i] == 'F') conHex[i] = 15;
		
		//cout << conHex[i] << " ";
	}
	//cout << endl;

	if (conHex[0] >=8) decNum = ((4096 * conHex[0]) + (256 * conHex[1]) + (16 * conHex[2]) + conHex[3]) - 65536;
    else decNum = (4096 * conHex[0]) + (256 * conHex[1]) + (16 * conHex[2]) + conHex[3];
	cout << decNum << endl;
	return 0;
}