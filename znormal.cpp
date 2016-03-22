#include "znormal.h"
#include "zombie.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
Znormal::Znormal(string tipo,bool vivo, int ataque, int defensa):Zombie(tipo),vivo(vivo),ataque(ataque),defensa(defensa){}

//destructor
Znormal::~Znormal(){}

//mutadores
void Znormal::setVivo(bool vivo){
	this-> vivo=vivo;
}

void Znormal::setAtaque(int ataque){
	this-> ataque=ataque;
}

void Znormal::setDefensa(int defensa){
	this-> defensa=defensa;
}

bool Znormal::getVivo(){
	return vivo;
}

int Znormal::getAtaque(){
	return ataque;
}

int Znormal::getDefensa(){
	return defensa;
}

//toString
string Znormal::toString()const{
	stringstream ss;
	ss<<"Z-Normal-> Ataque: "<<ataque<<" Defensa: "<<defensa;
	return ss.str();
}