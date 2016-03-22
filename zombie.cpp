#include "zombie.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//constructor
Zombie::Zombie(string tipo):tipo(tipo){}

//destructor
Zombie::~Zombie(){}

//toString
string Zombie::toString()const{
	stringstream ss;
	ss<<tipo;
	return ss.str();
}