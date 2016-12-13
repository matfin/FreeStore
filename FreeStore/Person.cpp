#include "stdafx.h"
#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string first, string last, int a)
	: firstname(first), 
	lastname(last), 
	age(a), 
	resource(nullptr)
{
	cout << "construct Person: " << firstname << " " << lastname << " " << age << endl;
}

Person::Person(const Person &p)
	: firstname(p.firstname),
	lastname(p.lastname), 
	age(p.age), 
	resource(new Resource(p.resource->getName()))
{
	cout << "construct (copy) Person: " << firstname << " " << lastname << " " << age << endl;
}

Person::~Person(void)
{
	cout << "destruct Person: " << firstname << " " << lastname << " " << age << endl;
	delete resource;
}

string Person::getFirstName() const 
{
	return firstname;
}

string Person::getLastName() const 
{
	return lastname;
}

string Person::getFullName() const 
{
	return firstname + " " + lastname;
}

Resource* Person::getResource() const
{
	return resource;
}

void Person::setFirstName(string first) 
{
	firstname = first;
}

void Person::setLastName(string last)
{
	lastname = last;
}

void Person::addResource()
{
	delete resource;
	resource = new Resource("This is a new resource for: " + getFullName());
}

Person &Person::operator=(const Person &p)
{
	firstname = p.firstname;
	lastname = p.lastname;
	age = p.age;
	delete resource;
	resource = new Resource(p.resource->getName());

	return *this;
}

bool Person::operator==(Person &p) const
{
	return firstname == p.firstname && lastname == p.lastname && age == p.age;
}

bool Person::operator>(Person &p) const
{
	return age > p.age;
}

bool Person::operator<(Person &p) const
{
	return age < p.age;
}