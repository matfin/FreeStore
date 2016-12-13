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
	Resource* resource;

public:
	Person(string first, string last, int a);
	Person(const Person &p);
	~Person(void);

	int getAge() const { return age; };
	string getFirstName() const;
	string getLastName() const;
	string getFullName() const;
	Resource* getResource() const;

	void setAge(int a) { age = a; };
	void setFirstName(string first);
	void setLastName(string last);
	void addResource();

	Person& operator=(const Person &p);
	bool operator==(Person &p) const;
	bool operator>(Person &p) const;
	bool operator<(Person &p) const;
};
#endif
