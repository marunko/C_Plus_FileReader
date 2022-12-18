// Study_C_Plus_Application.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <vector>
#include <iostream>
#include "functions.h"
#include "FileExchange.h"
#include "Element.h"

using namespace Functions;
using namespace std;
 
 
 // && operator and data[*i]; ?
class B {

 };
template <typename T> class A {
	T *t;
public:
	void setT(T* t) {
		this->t = t;
	}
	T* getT() {
		return this->t;
	}
	~A()
	{
		delete t;
		cout << "removing\n";
	}
};
int main()
{
	char arr[] = "./Files/persons.json";
	FileExchange fileEx = {};
	fileEx.setFileName(arr);
	//fileEx.readFile();
	
	 
	A<vector<char>> a;// values of array 
	//vector<char>* v = new vector<char>();
	a.setT(new vector<char>());
	a.getT()->push_back('1');
	a.getT()->push_back('2');
	a.getT()->push_back('3');
	 
	A<int> a1;

	a1.setT(new int(164564654));
	cout << *a1.getT();
	A<int> a2;
	int i = 2;
	a2.setT(&i);
}
 /*
 ======================================================================================================
 ===================== Tasks
 1. Multithreading synchronization
 2. Try Data Race 
 3. Mutithread reading with multiple ofstream and ifstream instances
 4. Buffer reading
 5. Heap data visualization
 6. Modules and #define, external own libs
 7. JSON serialization reading
 
 */