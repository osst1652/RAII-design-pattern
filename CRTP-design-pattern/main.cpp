#include <iostream>

#include "crtp2.h"

int main() {
	Base2<Derived2> be;

	std::cout << be.return_data() << std::endl;

	system("pause");
	return 0;
}