#include "stdafx.h"
#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string first, string last, int a)
	: firstname(first), 
	lastname(last), 
	age(a)
{
	cout << "construct Person: " << firstname << " " << lastname << " " << age << endl;
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

std::shared_ptr<Resource> Person::getResource() const
{
	return resource;
}

string Person::getResourceName() const
{
	return resource->getName();
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
	resource.reset();
	resource = std::make_shared<Resource>("This is a new resource for: " + getFullName());
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