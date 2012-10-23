//P.82 Program #9
//Rob Lamog
//Comp 516

#include <iostream>

using namespace std;

int main () {
    int a, b;
	double result;
	cout << "Enter two integers:" << endl;
	cin >> a >> b;
	
	result = a / (b + 0.0);
	
	cout << a << "/" << b << " has value " << result << endl
		<< a << "%" << b << " has value " << a % b << endl;
	return 0;
}

/*
Enter two integers:
3/9 has value 0.333333
3%9 has value 3
*/