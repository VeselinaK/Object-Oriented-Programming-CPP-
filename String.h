#pragma once
#include <cstring>
#include <iostream>
using namespace std;


class String
{
private:

	char* data;
	size_t size;

public:
	String();
	String(char *newdata, size_t newsize);
	String(const String& other);


	~String();

	void print();



	char getAt(int index);
	void setAt(int index, char symbol);

	//void print();

	void copy(const String&);

	void destroy();

	char* getName() const;

	void setName(char* name);

	const char* GetData()const;
};
