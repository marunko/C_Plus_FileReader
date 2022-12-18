#pragma once
#include <vector>
#include <iostream>

template <typename T> class Element
{
private:
	Element* parant;
	std::string key;
	T* value; 
	// 1. Element<Element*> "key"{ "": ""} 
	// 2. vector<variant<int, string, Element>> [1, "", {}]
	//3. Element<string> or if NUM Element<int> {"key": "val"} | {"key": 1}

public:
	 
	Element(std::string str);
	Element(T *data);
	~Element();
	void setParent(Element* parant);
	void setValue(T* value);
	void setKey(std::string key);


};
 