#include "pimpl.h"
#include <iostream>

int main() {
	Container c(10);
	c[3] = 37;

	std::cout << c[3] << std::endl;

	return 0;

}