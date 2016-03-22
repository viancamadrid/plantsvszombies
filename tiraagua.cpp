#include "tiraagua.h"
#include "plant.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
TiraAgua::TiraAgua(string tipo,int soles, int ataque, int defensa):Plant(tipo),soles(soles),ataque(ataque),defensa(defensa){}

//destructor
TiraAgua::~TiraAgua(){}

//mutadores
void TiraAgua::setAtaque(int ataque){
	this-> ataque=ataque;
}

void TiraAgua::setDefensa(int defensa){
	this-> defensa=defensa;
}

int TiraAgua::getAtaque(){
	return ataque;
}

int TiraAgua::getDefensa(){
	return defensa;
}

//toString
string TiraAgua::toString()const{
	stringstream ss;
	ss<<"TiraAgua-> Ataque: "<<ataque<<" Defensa: "<<defensa;
	return ss.str();
}