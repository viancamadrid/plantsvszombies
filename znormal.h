#pragma once
#include "zombie.h"
#include <string>

using std::string;

class Znormal:public Zombie{
	bool vivo;
	int ataque, defensa;
public:
	Znormal(string,bool,int,int);
	virtual ~Znormal();
	void setVivo(bool vivo);
	void setAtaque(int ataque);
	void setDefensa(int defensa);
	bool getVivo();
	int getAtaque();
	int getDefensa();
	virtual string toString()const;
};