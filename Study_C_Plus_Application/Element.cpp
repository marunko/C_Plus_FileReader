#include "Element.h"

class Value{};
class ValueInt : public Value {
	int i;
public:
	int& getInt() {
		return this->i;
	}
	void setInt(int &i) {
		this->i = i;
	}
};
class ValueString : public Value {
	std::string str;
public:
	std::string& getStr() {
		return this->str;
	}
	void setStr(std::string& str) {
		this->str = str;
	}
};
class ValueElement : public Value{
	Element* element;
public:
	Element* getStr() {
		return this->element;
	}
	void setStr(Element* element) {
		this->element = element;
	}
	~ValueElement()
	{
		delete element;
	}
};

Element::Element(std::string str) {
	this->key = str;
}
 
Element::~Element() {
	delete val;
}