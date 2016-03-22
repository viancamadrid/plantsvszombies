#include "patata.h"
#include "plant.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
Patata::Patata(string tipo,int soles, int ataque, int defensa):Plant(tipo),soles(soles),ataque(ataque),defensa(defensa){}

//destructor
Patata::~Patata(){}

//mutadores
void Patata::setAtaque(int ataque){
	this-> ataque=ataque;
}

void Patata::setDefensa(int defensa){
	this-> defensa=defensa;
}

int Patata::getAtaque(){
	return ataque;
}

int Patata::getDefensa(){
	return defensa;
}

//toString
string Patata::toString()const{
	stringstream ss;
	ss<<"Patata-> Ataque: "<<ataque<<" Defensa: "<<defensa;
	return ss.str();
}