#pragma once // means file may be imported only one time  

#include <iostream> // will not be insluded into main programm because it have been added already in main(); file
#define end }

#ifndef F // if F is not defined 
#define F // then define 
 //if defined then all code below will be ignored
#include <math.h> 
typedef __int64 superint;
namespace Functions{
// statndard functions
	int getI();
	
	void changeData(std::string* str); // link to an object

}
//#define one(int)->int
 
#endif // !F
