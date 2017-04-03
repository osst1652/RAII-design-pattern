#ifndef CRTP2_H
#define CRTP2_H

template <typename T>
class Base2 {
public:
	T& derived() {
		return static_cast<T&>(*this);
	}

	int return_data() { return derived().get_value(); }


};

class Derived2 :public Base2<Derived2> {
public:
	int get_value() const { return 100; }
};

#endif