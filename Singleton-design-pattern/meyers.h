#ifndef MEYERS_H
#define MEYERS_H

#include <iostream>

class MeyersSingleton {

	MeyersSingleton() {};
	MeyersSingleton(const MeyersSingleton&);
	MeyersSingleton& operator=(const MeyersSingleton&);

public:

	static MeyersSingleton& instance() {
		static MeyersSingleton instance;
		return instance;
	}

	void dummy_func() {
		std::cout << "working " << std::endl;
	}
};


#endif
