#pragma once
#include <string>

class Resource
{
private:
	std::string name;
public:
	Resource(std::string n); //constructor
	Resource(const Resource& r);//copy constructor
	Resource& operator=(const Resource& r); // copy assigment operator
	~Resource(void); //destructor
	std::string GetName() const{ return name; }
};