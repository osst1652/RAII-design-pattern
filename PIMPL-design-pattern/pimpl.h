#ifndef PIMPL_H
#define PIMPL_H

#include <cstdlib>

class Container {
public:
	Container(const size_t size);
	int& operator[] (const int index);
	const int& operator[] (const int index) const;

private:
	Container(const Container& other);			//Disallows copy
	Container& operator=(const Container& other);

	class Implement;
	Implement* _imp;



};

#endif