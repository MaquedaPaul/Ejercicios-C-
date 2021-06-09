#include <iostream>
using namespace std;


int main(){
    
    float practica, teorica, participacion, NotaFinal;
   
    cout<<"Digite el valor de la nota Practica: ";
    cin>>practica;



    cout<<"Digote el valor de la nota Teorica: ";
    cin>>teorica;

    cout<<"Digite el valor de la nota Participacion: ";
    cin>>participacion;

    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    NotaFinal = practica + teorica + participacion;

    cout<<"La nota final es: "<<NotaFinal<<endl;






    return 0;

}
    

