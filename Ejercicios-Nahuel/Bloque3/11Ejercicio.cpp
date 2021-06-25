#include <iostream>
using namespace std;


int main(){
int Saldo_inicial=1000,opc;
float extra, saldo=0,retiro;

cout<<"Bienvenido a su Cajero Virtual"<<endl;
cout<<"1. Ingresar dinero en cuenta"<<endl;
cout<<"2. Retirar dinero de la cuenta"<<endl;
cout<<"3. Salir"<<endl;
cout<<"Opcion: ";
cin>>opc;

switch(opc) {
case 1:
cout<<"Digite la cantidad de dinero que desea ingresar: ";
cin>>extra;
saldo=Saldo_inicial+extra;
cout<<"Dinero en cuenta: "<<saldo;break;

case 2:
cout<<"Digite la cantidad de dinero que desea retirar: ";
cin>>retiro;

if(retiro>saldo)        {
    cout<<"Usted no posee esa cantidad de dinero en su cuenta";
}
else{
    saldo=Saldo_inicial-retiro;
cout<<"Dinero en cuenta: "<<saldo<<endl;
}
case 3: break;
}
    return 0;
}