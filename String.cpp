
#include "stdafx.h"
#include "String.h"


void String::copy(const String& other)
{
	this->data = new char[strlen(other.data) + 1];
	strcpy_s(this->data, strlen(other.data) + 1, other.data);
	this->size = other.size;
}

void String::destroy()
{
	delete[] this->data;
	this->size = 0;
}

String::String(const String& other)
{
	copy(other);
}



String::String()
{
	this->data = nullptr;
	this->size = 0;
}


String::String(char* newdata, size_t newsize)
{
	this->data = new char[strlen(newdata) + 1];
	strcpy_s(this->data, strlen(newdata) + 1, newdata);
	this->size = newsize;
}

void String::print()
{
	cout << this->data << endl;
	cout << this->size << endl;
}


String::~String()
{
	destroy();
}


char String::getAt(int i)
{
	return this->data[i];
}

void String::setAt(int index, char sym)
{
	this->data[index] = sym;
}
