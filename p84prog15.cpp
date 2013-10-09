//P.84 Program #15
//Rob Lamog
//Comp 516

#include <iostream>
#include <string>

using namespace std;

void Tower(int disc, int startPeg, int endPeg) {
    if (disc <= 0) return;

    if (disc == 1) cout << "Move disk from " << startPeg << " to " << endPeg << endl;
    else {
    	int other = 6 - startPeg - endPeg;
		Tower(disc - 1, startPeg,  other);
		Tower(1, startPeg, endPeg);
		Tower(disc - 1, other, endPeg);
	}
}

int main() {
	int d, s, e;

	cout << "How many discs do you want to move?\n";
	cin >> d;
	cout << d << endl;
	cout << "From which peg?\n";
	cin >> s;
	cout << s << endl;
	cout << "To which peg?\n";
	cin >> e;
	cout << e << endl;

	Tower(d, s, e);

	return 0;
}

/*
How many discs do you want to move?
3
From which peg?
1
To which peg?
3
Move disk from 1 to 3
Move disk from 1 to 2
Move disk from 3 to 2
Move disk from 1 to 3
Move disk from 2 to 1
Move disk from 2 to 3
Move disk from 1 to 3
*/