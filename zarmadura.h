#pragma once
#include "zombie.h"
#include <string>

using std::string;

class Zarmadura:public Zombie{
	bool vivo;
	int ataque, defensa;
public:
	Zarmadura(string,bool,int,int);
	virtual ~Zarmadura();
	void setVivo(bool vivo);
	void setAtaque(int ataque);
	void setDefensa(int defensa);
	bool getVivo();
	int getAtaque();
	int getDefensa();
	virtual string toString()const;
};