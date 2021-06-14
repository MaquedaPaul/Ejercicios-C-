#include <iostream>
using namespace std;


int main(){
    int numero;
    cout<<"Digite el valor del numero: ";
    cin>>numero;

    if(numero==0){
        cout<<"El numero es 0";
    }
else if (numero%2==0){
    cout<<"El numero es par";
}
else{
    cout<<"El numero es impar";
}

    return 0;
}