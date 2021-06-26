/*Ejercicio 12: Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.*/


#include <iostream>
#include<math.h>
using namespace std;
int main(){
int opcion, numero, cubo;
    cout<<"Bienvenido al menu, digite la opcion que desea utilizar"<<endl;
    cout<<"1. Sacar el valor del Cubo de un numero"<<endl;
    cout<<"2. Saber si un numero es par o impar"<<endl;
    cout<<"salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

switch(opcion){
case 1:
cout<<"Digite el valor del numero que quiera elevar al Cubo: ";
cin>>numero;
cubo = pow(numero,3);
cout<<"El valor del numero es: "<<cubo<<endl;

case 2:
cout<<"Digite el valor de un numero: ";
cin>>numero;

if(numero==0){
cout<<"El numero es 0";
}
else if(numero%2==0){
cout<<"El numuero es par";
}
else{
    cout<<"El numero es impar";
}

case 3:break;


}
    return 0;
}