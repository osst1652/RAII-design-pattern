#ifndef SMARTP_H
#define SMARTP_H

template <typename T>
class Ptr {
	T* ptr;

	//Blockera kopiering och tilldelning
	Ptr(const Ptr&);
	Ptr& operator=(const Ptr&);

public:

	explicit Ptr(T* p = 0) : ptr(p) {};
	~Ptr() { delete ptr; }

	T* operator->() const { return ptr; }
	T& operator*() const { return*ptr; }

};


#endif
