#pragma once
#include "plant.h"
#include <string>

using std::string;

class Patata:public Plant{
	int soles, ataque, defensa;
public:
	Patata(string,int,int,int);
	virtual ~Patata();
	void setAtaque(int ataque);
	void setDefensa(int defensa);
	int getAtaque();
	int getDefensa();
	virtual string toString()const;
};