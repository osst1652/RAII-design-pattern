#ifndef CRTP1_H
#define CRTP1_H

class Base {
protected:

	virtual int get_value() const = 0;

public:
	virtual ~Base() {};
	int return_data() const { return this->get_value(); }
};

class Subclass : public Base {
private:
	int get_value() const override {
		return 10;
	}
};

#endif