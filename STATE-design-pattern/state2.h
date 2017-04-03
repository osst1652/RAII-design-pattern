#ifndef STATE2
#define STATE2
#include <string>

class ClientMember {
	Membership_base* _mem;
	std::string name;
	int current_discounts;
public: 
	ClientMember(const std::string &n) : name(n), current_discounts(0), _mem(new FreeMember()) {};
	void upgrade() {
		_mem = _mem->upgrade();
	}
	const std::string& getName() { return name; }

	bool canDiscount() const {
		return(_mem->discounts_daily() - current_discounts) > 0;
	}

	bool discount() {
		if (canDiscount()) {
			++current_discounts;
			return true;
		}
		return false; 
	}
};


class Membership_base {
	std::string nameOfMembership;

public:
	Membership_base(const std::string& n) : nameOfMembership(n) {};

	const std::string& getName() { return nameOfMembership; }
	virtual int discounts_daily() const = 0;
	virtual Membership_base* upgrade() const = 0;
};



class FirstClassMember : public Membership_base {
public:
	FirstClassMember() : Membership_base("First Class") {};

	int discounts_daily() const override {
		return 5;
	}

	virtual Membership_base* upgrade() const override {
		return nullptr;
	}
};

class StandardMember : public Membership_base {
public:
	StandardMember() : Membership_base("Standard") {};

	int discounts_daily() const override {
		return 5;
	}

	virtual Membership_base* upgrade() const override {
		return new FirstClassMember();
	}
};

class FreeMember : public Membership_base {
public:
	FreeMember() : Membership_base("Free") {};

	int discounts_daily() const override {
		return 1;
	}

	virtual Membership_base* upgrade() const override {
		return new StandardMember();
	}
};

#endif