#include "ztirafuego.h"
#include "zombie.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
ZTiraFuego::ZTiraFuego(string tipo,bool vivo, int ataque, int defensa):Zombie(tipo),vivo(vivo),ataque(ataque),defensa(defensa){}

//destructor
ZTiraFuego::~ZTiraFuego(){}

//mutadores
void ZTiraFuego::setVivo(bool vivo){
	this-> vivo=vivo;
}

void ZTiraFuego::setAtaque(int ataque){
	this-> ataque=ataque;
}

void ZTiraFuego::setDefensa(int defensa){
	this-> defensa=defensa;
}

bool ZTiraFuego::getVivo(){
	return vivo;
}

int ZTiraFuego::getAtaque(){
	return ataque;
}

int ZTiraFuego::getDefensa(){
	return defensa;
}

//toString
string ZTiraFuego::toString()const{
	stringstream ss;
	ss<<"Z-TiraFuego-> Ataque: "<<ataque<<" Defensa: "<<defensa;
	return ss.str();
}