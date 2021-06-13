/* switch (expresion){
    case literal1: 
    conjunto de interacciones1;
    break;
    conjunto de interaccines2;
    break;
    conjunto de interacciones3,
    break;
    default:
    conjunto de interacciones por defecto;
    break;
}*/

#include <iostream>
using namespace std;


int main(){
int numero;
cout<<"Digite un numero entre 1-3: ";
cin>>numero;

switch (numero){
    case 1: cout<<"Digite el numero 1: ";break;
    case 2: cout<<"Digite el numero 2: ";break;
    case 3: cout<<"Digite el numero 3: ";break;
    
    default:
    cout<<"Ese numero no esta en el rango de 1-3";break;

}

    return 0;
}
