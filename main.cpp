#include <iostream>
#include "Persona.h"

using namespace std;


int main (){
    Persona p1 (29,"Jose");
    Persona* p1ptr=&p1;
    Persona* p2= new Persona (20,"Pepe");
    cout<<p2 -> getNombre()<<endl;
    p2=&p1;
    Persona v[5];
    Persona v2[5];
    
    return 0; 
    
}

//Datos
    // v[1]  es como un puntero  por lo que si ponemos  
    //v[0]+1 seria como apuntar a v[1]
    // #v[0] + 1 seria toma lo que esta apuntado en v[0] y le sumamos 1
    // *(v[0]+1) toma lo que esta en la direccion de memoria de v[1]
    