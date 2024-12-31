#include <iostream>
#include "Headers.h";

using namespace std;

int main() {
	int a = -2;
	a <<= 1;
	a >>= 1;
	decrease(increase(square(a)), 5);
	cout << "a adress: " << &a << " value: " << a << endl;

	//square(a);
	//cout << "a adress: " << &a << " value: " << a << endl;
	//a = 2;
	//cube(a);
	//cout << "a adress: " << &a << " value: " << a << endl;

	return 0;
}
