#pragma once
#include "Element.h"
#include <vector>
#include <iostream>
class JsonParser
{
private: 

	void readArrayObjects(int, int*, char*, Element*);
	void readArrayValues(int, int*, char*, Element*);
	//void readName(char*, int*);
	std::string readString(int,char*, int*);
	int parseCharToInt(int, char*);
	int getNumber(int, int*, char*);
	void setElement();
	template<typename T> void checkArray(int ,int*, char*, Element*);
	bool isSomthing(int*, char*);
	void readArrayValues();


public:
	void parse(int, char*); // main method put readObject inside
	Element* readObject(int,int*, char*, Element*);


	JsonParser();
	~JsonParser();
};

 