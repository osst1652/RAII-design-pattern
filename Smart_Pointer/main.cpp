#include <iostream>
#include "smartP.h"

class Resource {
public:
	Resource() {
		std::cout << "Init" << std::endl;
	}
	~Resource() {
		std::cout << "destroying" << std::endl;
	}

	void dummy_func() {
		std::cout << "Dummy function" << std::endl;
	}
};

int main() {
	//Create the pointer and init it with the resource object.
	Ptr<Resource> pr(new Resource());
	pr->dummy_func();


	system("pause");
	return 0;
}