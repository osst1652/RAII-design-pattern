#include "DCL.h"
#include "meyers.h"

int main() {

	//DCL singleton
	DCLSingleton *insta = DCLSingleton::instance();

	insta->dummy_func();

	//meyers singleton
	
	MeyersSingleton& insta2 = MeyersSingleton::instance();
	insta2.dummy_func();

	system("pause");
	return 0;
}