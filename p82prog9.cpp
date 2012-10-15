//P.82 Program #9
//Rob Lamog
//Comp 516

#include <iostream>

using namespace std;

int main () {
    int a, b;
	cout << "Enter two integers:" << endl;
	cin >> a >> b;
	cout << a << "/" << b << " has value " << a / b << endl
		<< a << "%" << b << " has value " << a % b << endl;
	return 0;
}