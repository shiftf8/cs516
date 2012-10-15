//P.84 Program #15
//Rob Lamog
//Comp 516

#include <iostream>
#include <string>

using namespace std;

void move(int n, string s, string i, string d) {
//s stands for source tower
//i stands for intermediate tower
//d stands for destination tower

    if(n > 0) {
		cout << "Line 1 : Moving top " << n - 1 << " disks of " << s << " to " << i << ".";
		if (n - 1 <= 0) cout << "  There will be nothing to move.  Base condition will be hit.";
        cout << endl;
		move(n - 1, s, d, i);
		//move n-1 disks from source to intermediate tower

		cout << "Line 2 (Physically moving single disk) : Disk " << n << " is moved from " << s << " to " << d << endl;
		//move the disk from to source to destination

		move(n - 1, i, s, d);
		//move n-1 disks from intermediate to destination
		cout << "Line 3 : Moving top " << n - 1 << " disks of " << i << " to " << d << ".";
		if (n - 1 <= 0) cout << "  There will be nothing to move.  Base condition will be hit.";
        cout << endl;
	} else cout << "Line 4 : End of recursion.  Base condition has been met.\n";
}

int main() {
	cout << "Enter the # of disks.\n";
	
	int n;
	cin >> n;
	move(n, "source tower", "intermediate tower", "destination tower");
	
	return 0;
}