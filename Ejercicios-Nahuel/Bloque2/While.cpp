#include <iostream>
#include <math.h>

using namespace std;


int main(){

float a, resultado;

cout<<"Digite el valor del numero";
cin>>a;
int cantidadVeces;



cout<<"Digite la cantidad de veces a dividir"<<endl;
cin>>cantidadVeces;
int i=0;

while (i < cantidadVeces)
{
    a = a / 2;
    i++;
}

resultado = a;
cout<<"El resultado es: "<<resultado<<endl;
return 0;

}
