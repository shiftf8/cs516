//P.83 Program #13
//Rob Lamog
//Comp 516

#include <iostream>

using namespace std;

void rect(int& ar, int& per, int len, int wid) {
    ar = len * wid;
	per = (2*len) + (2*wid);
}

int main () {
	int ar = 0, per = 0, l, w;
	cout << "Enter length and width of rectangle:" << endl;
	cin >> l >> w;
	rect(ar, per, l, w);
	
	cout << "Length: " << l << endl
		<< "Width: " << w << endl
		<< "Area: " << ar << endl
		<< "Perimeter: " << per << endl;

	return 0;
}

/*
Enter length and width of rectangle:
Length: 3
Width: 9
Area: 27
Perimeter: 24
*/