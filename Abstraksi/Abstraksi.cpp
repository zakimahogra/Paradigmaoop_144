#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:

	void setXP(string a, string b) {
		x = a;
		y = b;
	}
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

