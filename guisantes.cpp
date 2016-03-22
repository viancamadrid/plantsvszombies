#include "guisantes.h"
#include "plant.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
Guisantes::Guisantes(string tipo,int soles, int ataque, int defensa):Plant(tipo),soles(soles),ataque(ataque),defensa(defensa){}

//destructor
Guisantes::~Guisantes(){}

//mutadores
void Guisantes::setAtaque(int ataque){
	this-> ataque=ataque;
}

void Guisantes::setDefensa(int defensa){
	this-> defensa=defensa;
}

int Guisantes::getAtaque(){
	return ataque;
}

int Guisantes::getDefensa(){
	return defensa;
}

//toString
string Guisantes::toString()const{
	stringstream ss;
	ss<<"Guisantes-> Ataque: "<<ataque<<" Defensa: "<<defensa;
	return ss.str();
}