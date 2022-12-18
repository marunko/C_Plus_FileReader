#include "functions.h"

int Functions::getI() {
	
	return RAND_MAX;
}

void Functions::changeData(std::string* str) {
	*str = "some new string"; // change a real object string 
}
