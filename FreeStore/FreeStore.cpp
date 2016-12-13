#include "stdafx.h"
#include "Resource.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	Person one("Matt", "Finucane", 34);
	one.addResource();
	one.setFirstName("Altered");
	one.addResource();

	Person two = one;
	
	one = two;

	return 0;
}

