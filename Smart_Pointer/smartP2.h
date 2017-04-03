#ifndef SMARTP2_H
#define SMARTP2_H
//Lazy smart pointer


template<typename T>
class LazyPointer {
	//Same as smartP.h
	T* ptr;

	//Blockera kopiering och tilldelning
	LazyPointer(const LazyPointer&);
	LazyPointer& operator=(const LazyPointer&);

public:
	explicit LazyPointer(T* p = 0) : ptr(p) {};
	~LazyPointer() { delete ptr; }

	T* operator->() {
		//If no pointer existing, giving a nullpointer
		if (!ptr)
			//create default pointer
			ptr = new T();
		return ptr;
	}
	T& operator*() {
		//If no pointer existing, giving a nullpointer
		if (!ptr)
			//create default pointer
			ptr = new T();
		return *ptr;
	}

};


#endif