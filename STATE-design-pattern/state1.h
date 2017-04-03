#ifndef STATE1
#define STATE1

#include <iostream>
#include <string>

class member {
	enum membershipTypes { FREE, STANDARD, FIRSTCLASS };
	membershipTypes types;

	int current_discounts;

	std::string name;

public:
	member(const std::string& name) : name(name), types(FREE), current_discounts(0) {};

	void upgrade() {
		switch (types) {
		case FREE:
			types = STANDARD;
			break;
		case STANDARD:
			types = FIRSTCLASS;
			break;
		case FIRSTCLASS:
			std::cout << "Highest possible level" << std::endl;
			break;

		}
	}
	bool discountsAvailable() {
		switch (types) {
		case FREE:
			return current_discounts < 1;
			break;
			case 
		}
	}

};

#endif