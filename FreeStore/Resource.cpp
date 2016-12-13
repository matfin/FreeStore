#include "stdafx.h"
#include "Resource.h"
#include <iostream>


Resource::Resource(std::string n)
	: name(n)
{
	std::cout << "constructing Resource: " << name << std::endl;
}


Resource::~Resource(void)
{
	std::cout << "destructing Resource: " << name << std::endl;
}
