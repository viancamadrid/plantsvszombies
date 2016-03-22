#pragma once
#include "plant.h"
#include <string>

using std::string;

class TiraAgua:public Plant{
	int soles, ataque, defensa;
public:
	TiraAgua(string,int,int,int);
	virtual ~TiraAgua();
	void setAtaque(int ataque);
	void setDefensa(int defensa);
	int getAtaque();
	int getDefensa();
	virtual string toString()const;
};