#include "zarmadura.h"
#include "zombie.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
Zarmadura::Zarmadura(string tipo,bool vivo, int ataque, int defensa):Zombie(tipo),vivo(vivo),ataque(ataque),defensa(defensa){}

//destructor
Zarmadura::~Zarmadura(){}

//mutadores
void Zarmadura::setVivo(bool vivo){
	this-> vivo=vivo;
}

void Zarmadura::setAtaque(int ataque){
	this-> ataque=ataque;
}

void Zarmadura::setDefensa(int defensa){
	this-> defensa=defensa;
}

bool Zarmadura::getVivo(){
	return vivo;
}

int Zarmadura::getAtaque(){
	return ataque;
}

int Zarmadura::getDefensa(){
	return defensa;
}

//toString
string Zarmadura::toString()const{
	stringstream ss;
	ss<<"Z-Armadura-> Ataque: "<<ataque<<" Defensa: "<<defensa;
	return ss.str();
}