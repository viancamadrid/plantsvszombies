#pragma once

#include <string>

using std::string;

class Plant{
	string tipo;
	int ataque, defensa;
public:
	Plant(string,int,int);
	virtual ~Plant();
	virtual string toString()const;
};