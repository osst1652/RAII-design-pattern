#ifndef NAIVESINGLE_H
#define NAIVESINGLE_H

#include <iostream>

class NaiveSingleton {
	static NaiveSingleton* instance;

	NaiveSingleton() {};
	NaiveSingleton(const NaivveSingleton&);
	NaiveSingleton& operator=(const NaiveSingleton&);

public:
	static NaiveSingleton* instance() {
		if (!instance) {
			instance = new NaiveSingleton();
		}
		return instance;
	}

	void dummy_function() const {
		std::cout << "doing a dummy function " << std::endl;
	}

};

NaiveSingleton * NaiveSingleton::instance = nullptr;


#endif // !NAIVESINGLE_H
