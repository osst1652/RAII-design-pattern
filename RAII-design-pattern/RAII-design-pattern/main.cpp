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

int main() {
	std::mutex mt;

	std::cout << "start" << std::endl;

	try {
		lock lo(mt);

		std::cout << "file locked" << std::endl;
		throw std::exception();
	}
	catch (...) {
		std::cout << "exception caught" << std::endl;
	}
	std::cout << "Over" << std::endl;
	system("pause");
	return 0;
}