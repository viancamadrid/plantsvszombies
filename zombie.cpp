#include "zombie.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
Zombie::Zombie(string tipo, int ataque, int defensa):tipo(tipo),ataque(ataque),defensa(defensa){}

//destructor
Zombie::~Zombie(){}

//toString
string Zombie::toString()const{
	stringstream ss;
	ss<<tipo;
	return ss.str();
}