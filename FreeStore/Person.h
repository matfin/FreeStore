#ifndef _Person_H
#define _Person_H
#include "Resource.h"
#include <memory>
#include <string>
#include <iostream>

using namespace std;

class Person
{
private: 
	string firstname;
	string lastname;
	int age;
	std::shared_ptr<Resource> resource;

public:
	Person(string first, string last, int a);

	int getAge() const { return age; };
	string getFirstName() const;
	string getLastName() const;
	string getFullName() const;
	std::shared_ptr<Resource> getResource() const;
	string getResourceName() const;

	void setAge(int a) { age = a; };
	void setFirstName(string first);
	void setLastName(string last);
	void addResource();

	bool operator==(Person &p) const;
	bool operator>(Person &p) const;
	bool operator<(Person &p) const;
};
#endif
