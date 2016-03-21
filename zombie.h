#pragma once

#include <string>

using std::string;

class Zombie{
	string tipo;
	int ataque, defensa;
public:
	Zombie(string,int,int);
	virtual ~Zombie();
	virtual string toString()const;
};