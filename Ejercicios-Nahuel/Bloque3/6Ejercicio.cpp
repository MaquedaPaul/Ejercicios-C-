#include <iostream>
using namespace std;


int main(){
    char letra;
    cout<<"Digite un caracter: ";
    cin>>letra;

switch (letra){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':cout<<"Es una vocal en minuscula";break;
case'A':
case'E':
case'I':
case'O':
case'U': cout<<"Es una vocal en mayuscula";break;
default: cout<<"No es una vocal en mayuscula";break;

}
   
    return 0;
}










