#include <iostream>
using namespace std;

int glo = 10;

// this extern is not necessary
extern void sub();

int main() {
	int loc = 20;
	glo = 15;
	cout << "main: loc = " << loc << endl;
	cout << "main: glo = " << glo << endl;
	cout << "============" << endl;
	sub();
	cout << "============" << endl;
	cout << "main: glo = " << glo << endl;
	return 0;
}
