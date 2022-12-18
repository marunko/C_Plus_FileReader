#pragma once
#include "Element.h"
#include <vector>
#include <iostream>
class JsonParser
{
private: 

	template<typename T> void readArrayObjects(int, int*, char*, Element<T>*);
	template<typename T> void readArrayValues(int, int*, char*, Element<T>*);
	//void readName(char*, int*);
	std::string readString(int,char*, int*);
	int parseCharToInt(int, char*);
	int getNumber(int, int*, char*);
	void setElement();
	template<typename T> void checkArray(int ,int*, char*, Element<T>*);
	bool isSomthing(int*, char*);
	void readArrayValues();


public:
	void parse(int, char*); // main method put readObject inside
	template<typename T> int readObject(int,int*, char*, Element<T>*);


	JsonParser();
	~JsonParser();
};

 