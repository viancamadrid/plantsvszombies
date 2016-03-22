#pragma once
#include "zombie.h"
#include <string>

using std::string;

class ZTiraFuego:public Zombie{
	bool vivo;
	int ataque, defensa;
public:
	ZTiraFuego(string,bool,int,int);
	virtual ~ZTiraFuego();
	void setVivo(bool vivo);
	void setAtaque(int ataque);
	void setDefensa(int defensa);
	bool getVivo();
	int getAtaque();
	int getDefensa();
	virtual string toString()const;
};