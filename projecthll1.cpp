//Project #HLL 1
//Rob Lamog
//Comp 516

#include <iostream>
using namespace std;

int list[10];

int sum(int a[], int n) {
//Returns the sum of the elements of a between a[0] and a[n].
    if (n == 0) {
		return a[0];
	} else {
		return a[n] + sum(a, n - 1); //ra2
	}
}

int main() {
	cout << "Enter four integers:\n";
	cin >> list[0] >> list[1] >> list[2] >> list[3];
	cout << "Their sum is: " << sum(list, 3) << endl; //ra1
	return 0;
}