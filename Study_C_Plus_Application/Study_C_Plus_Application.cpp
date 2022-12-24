// Study_C_Plus_Application.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
 
#include <vector>
#include <iostream>
#include "functions.h"
#include "FileExchange.h"
#include "Element.h"

using namespace Functions;
using namespace std;
 
class Object;
class Value {};
class ValueObject : public Value{
	Object *obj;
public:
	void get() {
		cout << "COUT ";
	}
	Object* getObj() {
		return obj;
	}
	void setObj(Object *obj) {
		this->obj = obj;
	}
	~ValueObject() {
		delete obj;
	}
};
class ValueInt : public Value{
public:
	int i = 10;
};
class ValueString : public Value{

};

class Object {
	 
public:
	Value *v;

	~Object() {
		delete v;
	}
	void setValue(Value *pv) {
		this->v = pv;
	}
	Value* getValue() {
		return this->v;
	}
};
 
int main()
{
	char arr[] = "./Files/persons.json";
	FileExchange fileEx = {};
	fileEx.setFileName(arr);
	//fileEx.readFile();
	 
	Object* obj = new Object();
	obj->setValue(new ValueObject());
 
	((ValueObject*)(obj->v))->setObj(new Object());
	((ValueObject*)(obj->v))->getObj()->setValue(new ValueInt());
	Value *v = ((ValueObject*)(obj->v))->getObj()->getValue();
	cout << ((ValueInt*)v)->i;
	cout << ((ValueInt*)((ValueObject*)(obj->v))->getObj()->getValue())->i;

}
 /*
 ======================================================================================================
 =====================================	 Tasks
 1. Multithreading synchronization
 2. Try Data Race 
 3. Mutithread reading with multiple ofstream and ifstream instances
 4. Buffer reading
 5. Heap data visualization
 6. Modules and #define, external own libs
 7. JSON serialization reading
 
 */