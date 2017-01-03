#include <iostream>
using namespace std;

// declare global variable glo
//extern int glo;

void sub() {
	/*
	 * // declare local variable glo
	 * int glo;
	 * // declare global variable glo
	 * extern int glo;
	 */
	glo = 16;
	int loc = 1;
	cout << "sub: loc = " << loc << endl;
	cout << "sub: glo = " << glo << endl;
}
