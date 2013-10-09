//Project #HLL 2
//Rob Lamog
//Comp 516

#include <iostream>
using namespace std;

int main() {
    int x, used, list[10];
    
    int sum(int a[], int n) {
    //Returns the sum of the elements of a between a[0] and a[n].
        if (n == 0) {
    		return a[0];
    	} else {
    		return a[n] + sum(a, n - 1); //ra2
    	}
    }
    
	cout << "Enter an integer:\n";
	cin >> x;
	
    for(unsigned i = 0; i < x; i++){
        list[i] += 1;
        used++;
    }	
    for(unsigned i = 0; i < used; i++){
        cout << list[i]
    }

	return 0;
}