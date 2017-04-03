#include <mutex>
#include <iostream>
#include <exception>

class lock {
	std::mutex& mut;

public:
	lock(std::mutex& m) : mut(m) {
		std::cout << "Locked" << std::endl;
		mut.lock();
	}
	~lock() {
		std::cout << "Unlocked" << std::endl;
		mut.unlock();
	}
};