
#include <iostream>
#include <Persona.h>
using namespace std;
    Persona::Persona(int edad, string nombre){
        this->edad=edad;
        this->nombre=nombre;
    }

int Persona::getEdad(){return edad;}
string Persona::getNombre(){return nombre;}
void Persona::setEdad(int edad){this->edad =edad;}
void Persona::setNombre(int nombre){this->nombre =nombre;}
Persona:: ~Persona(){cout<<"Se destruye persona"}