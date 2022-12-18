#include "Element.h"
 
template <typename T> Element<T>::Element(std::string str) {
	this->key = str;
}
template <typename T> Element<T>::Element(T* value) {
	this->value = value;
}
 
template<typename T>
void Element<T>::setValue(T* value)
{

}
template<typename T>
void Element<T>::setKey(std::string str)
{

}

template<typename T>
void Element<T>::setParent(Element* parant)
{
	this->parant = parant;
}
 

template<typename T>
Element<T>::~Element()
{
	delete this->value;
}

 
