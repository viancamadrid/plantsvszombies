#include "plant.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
Plant::Plant(string tipo, int ataque, int defensa):tipo(tipo),ataque(ataque),defensa(defensa){}

//destructor
Plant::~Plant(){}

//toString
string Plant::toString()const{
	stringstream ss;
	ss<<tipo;
	return ss.str();
}