#include <iostream>
using namespace std;

int main(){
   
    int mes;
    
    cout<<"Digite el numero del mes (1-12): ";
    cin>>mes;
cout<<endl;

    switch(mes){
        case 1: cout<<"El numero que digito es el mes Enero";break;
        case 2: cout<<"El numero que digito es el mes Febrero";break;
        case 3: cout<<"El numero que digito es el mes Marzo";break;
        case 4: cout<<"El numero que digito es el mes Abril";break;
        case 5: cout<<"El numero que digito es el mes Mayo";break;
        case 6: cout<<"El numero que digito es el mes Junio";break;
        case 7: cout<<"El numero que digito es el mes Julio";break;
        case 8: cout<<"El numero que digito es el mes Agosto";break;
        case 9: cout<<"El numero que digito es el mes Septiembre";break;
        case 10: cout<<"El numero que digito es el mes Octubre";break;
        case 11: cout<<"El numero que digito es el mes Noviembre";break;
        case 12:cout<<"El numero que digito es el mes Diciembre";break;
               default: cout<<"Tiene que ingresar un numero del 1-12";break;
    }

    return 0;
}