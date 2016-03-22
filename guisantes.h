#pragma once
#include "plant.h"
#include <string>

using std::string;

class Guisantes:public Plant{
	int soles, ataque, defensa;
public:
	Guisantes(string,int,int,int);
	virtual ~Guisantes();
	void setAtaque(int ataque);
	void setDefensa(int defensa);
	int getAtaque();
	int getDefensa();
	virtual string toString()const;
};