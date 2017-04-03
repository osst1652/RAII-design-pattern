#ifndef DCL_H
#define DCL_H

//implement double check locking for the naive singleton class

#include <mutex>
#include <iostream>

class DCLSingleton {
	static DCLSingleton* instance;
	
	DCLSingleton() {};
	DCLSingleton(const DCLSingleton&); 
	DCLSingleton& operator=(const DCLSingleton&);
	static std::mutex mtx;

public:
	static DCLSingleton* instance() {
		if (!instance) {		//first check
			mtx.lock();			
			if (!instance)		//second check
				instance = new DCLSingleton();
			mtx.unlock();

		}
		return instance;
	}

	void dummy_func() {
		std::cout << "Doing something" << std::endl;
	}
};


std::mutex DCLSingleton::mtx;
DCLSingleton *DCLSingleton::instance = nullptr;


#endif