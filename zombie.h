#pragma once
#include <string>

using std::string;

class Zombie{
	string tipo;
public:
	Zombie(string);
	virtual ~Zombie();
	virtual string toString()const;
};