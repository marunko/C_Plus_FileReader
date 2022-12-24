#pragma once
#include <vector>
#include <iostream>

class Value;
class ValueInt;
class ValueElement;
class ValueString;

class Element
{
private:
	Element* parant;
	std::string key; // nullable in case of matrix array
	Value *val;

public:
	
	Element(std::string str);
	//Element(T *data);
	~Element();
	void setParent(Element* parant);
	void setValue(Value *value);
	void setKey(std::string key);

};
 