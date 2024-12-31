#include "Headers.h";

int& square(int& reference) {
	reference *= reference;
	return reference;
}

int& cube(int& reference) {
	reference *= square(reference);
	return reference;
}

int& absolute(int& reference) {
	if (reference < 0) reference *= -1;
	return reference;
}

int& increase(int& reference, int add) {
	reference += add;
	return reference;
}

int& decrease(int& reference, int dec) {
	reference -= dec;
	return reference;
}
