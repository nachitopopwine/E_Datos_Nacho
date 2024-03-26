

//////////PROGRAMACION EN C++///////////////
/*  
Trabaja con direcciones (especificamente memorias apuntadas con punteros)
minimo de espacio de datos es 1 byte 
las matrices que trabajaremos seran de 4 bytes

PESO DE VARIABLES:
N° int pesan 4 bytes
N° double pesan 8 bytes
N° float pesa 4 bytes
boolean pesa 1 byte 
puntero pesa 4 bytes

VECTORES: (siempre son secuenciales) //osea que solo esta guardada la cabeza del vector y si busco el vector v[3] se suma 3 a la cabeza para llegar osea pasa 0 , 1 , 2 , 3 y toma eso.
cuando se define el vector es solo del tipo del cual se define 
int v[10] // se creo un vector solo de int osea 10 espacios de memoria con 4 byts cada uno 

VARIABLES:
al momento de crear una variable se reservan espacios de memoria pero no necesariamente se tienen que usar todos
ej: String x = "hola" ; //en este caso el String deja reservado 256 espacios de memoria pero la cadena de caracteres que se crea osea "hola" usa solo 4 espacios de memoria
                        //osea utiliza 12 bytes pero solo pesa 4 bytes

PUNTERO:
es una variable que puede contener una direccion a una posicion de memoria 
primero se pone el tipo, se indica que es uin puntero con un * , luego se le da un nombre y luego se iguala a la direccion de memoria (&) de alguna variable por ejemplo x
ej: int* ptr = &x;  //ptr apunta a la direccion de memoria de x osea si int x =5; ptr apunta a la direccion de memoria donde esta 5 
si tengo int* ptr = 5; //significa que ptr esta apuntando al espacio de memoria n° 5 

si yo tengo lo siguiente:
    int x=5;
    int*ptr=&x;
       *ptr = 6 ;
//lo que hace es que ya despues de crear el puntero con el int*ptr =&x; al volver a poner *ptr este se convierte en una operacion y lo uqe hace es
//que el valor donde apunta ptr que seria la direccion de memoria de x osea el 5 cambia po un 6
pero si yo tengo lo siguiente:
    int x=5;
    int*ptr=&x;
       ptr = 6 ;
//Aca lo que hace es que le puntero ahora apunte a la direccion de memoria 6.

                        

*/

/*
estructura de datos secuencial:
    van en orden una despues de otro
*/