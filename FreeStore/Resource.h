#ifndef _Resource_H
#define _Resource_H
#include <string>

using namespace std;

class Resource
{
private:
	string name;
public:
	Resource(string n);
	~Resource(void);
	string getName() const { return name; }
};
#endif;
