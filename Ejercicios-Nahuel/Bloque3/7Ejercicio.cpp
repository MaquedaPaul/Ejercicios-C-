#include <iostream>
using namespace std;


int main(){
int edad;
cout<<"Digite su edad: ";
cin>>edad;

if((edad>=18)&&(edad<=25)){
cout<<"Su edad está dentro del rango de 18-25 años";

}
else{
    cout<<"Su edad no está dentro del rango de 18-25 años";
}
    return 0;
}