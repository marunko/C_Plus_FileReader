#include "JsonParser.h"
// Privates
using namespace std;

void JsonParser::readArrayObjects(int n , int* i, char* data, Element* p)
{
	++* i; // one step next after ' [ '
	// INIT Element T value p.setValue(); vector<variants> v;
	if (data[*i] == ']') return; // set empty vector<variants> [] // 1 "a" {}
	while (data[*i] != ']' || *i < n)
	{
		switch (data[*i]) {
			case '{': readObject(n, i, data, p); break; // p.setSubElements();
			case '"': break; // char 
			case '1': break; // getNumber(); RegEx
			case '[': readArrayObjects(n, i, data, p); break; // readArrayObjects
			default: break; 
		}
		++*i;
	}
}

void JsonParser::readArrayValues(int n, int* j, char* data, Element* p)
{

}
 
std::string JsonParser::readString(int size, char* data, int* index)
{//? ??? make it string and convert to char?? str+='';
	std::string str;
	while (data[++ * index] != '"' && data[*index] < size) {
		str += data[*index];
	}
	return str;
}
 
// OK
int JsonParser::parseCharToInt(int size, char* char_)
{
	int mul = 1;
	int mainVal = 0;
	for (int i = 0; i < size - 1; i++)
		mul *= 10;
	for (int i = 0; i < size; i++) {
		mainVal += (char_[i] - 48) * mul;
		mul = mul / 10;
	}
	return mainVal;
}

int JsonParser::getNumber(int n, int* i, char* data)
{
	std::string str;
	while (data[*i] != ' ' && data[*i] != ',' && data[*i] != ']' && data[*i] != '}') { // + and data[] is a number regEx
		// read main data file
		str += data[*i];
		++*i;
	}
	char* c = new char[str.length()];
	int res = parseCharToInt(str.length(), c);
	delete[] c;
	return res;
}

bool JsonParser::isSomthing(int* i, char* data)
{
	if (data[*i] != '"' && data[*i] != '1' && data[*i] != '{' && data[*i] != '[' && data[*i] != ']')// regEx
		//']' means [] - array is empty
		return true;
	return false;
}
// Parse value


/// <summary>
/// MAIN  
/// </summary>
/// <param name="size"></param>
/// <param name="data"></param>
 void JsonParser::parse(int size, char* data)
{
	// size of array - bytes of 
	//size of file in bytes to array size set it before the method call
	//readObject<T>(size, 0, data, nullptr);

}

// ?
// Remake it return Element<T> 
Element* JsonParser::readObject(int n, int* index, char* data, Element* parant)
{	// n - size of file in bytes to array size
	for (int i = *index; i < n && data[i] != '}'; i++) { // loop1
		if (data[i] == ' ') continue;
		if (data[i] == '{')
			// Element<?>
			// char name; char value;
			// form an object
			for (int j = i+1; j < n && data[j] != '}'; j++) {// loop2
				// name check and value
				if (data[j] == ' ') continue;
				if (data[j] == '"') {
					// 1. figure out is it an object or value 

					std::string key = readString(n, data, &j);
					//new Element(objectName); and value (T data) NULL

					while (!isSomthing(&j, data)) {
						// skip to next element
						j++;
					}
					if (data[j] == '{') {
					/*	Element<Element<string>>* element = new Element<Element<string>>(key);
						element->setParent(parant);
						readObject(n, &j, data, element);	
						return element; */
					}// readObject(); "name": {} new Element<Element>();
					
					
					if (data[j] == '"' || data[j] == '1') {
						 
						if (data[j] == '"') {
						/* 	Element<string>* element = new Element<string>(key);
							element->setParent(parant);
							std::string value = readString(n, data, &j);

 						    element->setValue(&value);
							*/
						}
					}

					if (data[j] == '[') {
						
						//new Element<vector<variant<int, string, Element>>>();
					} // if "name": [] array of values? [{}] -?
				}

				
				i = j;
				
				//std::cout << data[i];
			}
		return nullptr;
	}
}
JsonParser::JsonParser()
{

}

JsonParser::~JsonParser()
{
}
