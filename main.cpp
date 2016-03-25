#include "plant.h"
#include "zombie.h"
#include "guisantes.h"
#include "patata.h"
#include "tiraagua.h"
#include "znormal.h"
#include "zarmadura.h"
#include "ztirafuego.h"
#include <iostream>
#include <string>
#include <sstream>
#include <ctime> 
#include <cstdlib>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::stringstream;

string** crearMatriz();
void eliminarMatriz(string**);
void impresionTablero(string** matriz);
void impresionLinea();
int random3 ();
int random7 ();

int main(int argc, char const *argv[]){
	srand(time(NULL));
	string** matriz = crearMatriz();
	impresionTablero(matriz);
	eliminarMatriz(matriz);
	return 0;
}

int random3 (){
	return rand()%3+1;
}

int random7 (){
	return rand()%7;
}


string** crearMatriz(){
	string** matriz = new string*[8];
	for(int i=0;i<8;i++){
		matriz[i]= new string[5];		
	}
	for(int i=0;i<8;i++)
            for(int j=0;j<5;j++)
                matriz[i][j] = "O";

	return matriz;
}

void eliminarMatriz(string** matriz){
	for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                delete[] matriz[i];
        }
    }
	delete[] matriz;

	return;
} 

void impresionTablero(string** matriz){
	int charAscii = 65;
	cout<<"\t\t";
	for(int i=0; i<5; i++){
		cout<<(char)(i+charAscii);
		cout<<"\t\t";
	}
	cout<<"\n\n";
	charAscii = 65;
	for(int i=0; i<8; i++){
		cout<<i;
		cout<<"\t";
        for(int j=0; j<5; j++){
            cout<<"|";
        	cout<<"       ";
            cout<<matriz[i][j];
            cout<<"       ";
		}
        cout<<"|";
    	impresionLinea();
    }
    return;
}

void impresionLinea(){
	cout<< "\n\t";
	for(int j=0; j<80; j++){
		cout<< "-";
	}
	cout<< "\n";
}