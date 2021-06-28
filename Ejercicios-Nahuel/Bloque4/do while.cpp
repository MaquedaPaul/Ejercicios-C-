#include <iostream>
#include <stdlib.h>//tiene una funcion muy similar a la de conio.h

//El do while es tiene una funcion reversa a la del while, ya que este actua antes de pensar.
using namespace std;
int main(){
int i;
i=10;

do{
    cout<<i<<endl;
    i--;
}while(i>=1);

system("pause");//es parte de stdlib.h
    return 0;
}