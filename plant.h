#pragma once
#include <string>

using std::string;

class Plant{
	string tipo;
public:
	Plant(string);
	virtual ~Plant();
	virtual string toString()const;
};