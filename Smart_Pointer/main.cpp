#include <iostream>
#include "smartP.h"
#include "smartP2.h"

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

	//create via lazy pointer
	//useful when we are not sure if we want to point to something with the resource. 
	//So it is not created until its required. 

	LazyPointer<Resource> pr2;

	pr->dummy_func();

	
	system("pause");
	return 0;
}