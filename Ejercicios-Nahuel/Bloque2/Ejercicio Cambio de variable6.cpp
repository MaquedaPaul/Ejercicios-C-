#include <iostream>
using namespace std;


int main(){
    float a,b,c,d,e,f,g,h,i,NotaFinalMediaAlumnoA,NotaFinalMediaAlumnoB,NotaFinalMediaAlumnoC;

    cout<<"Digite la primera nota Final del Alumno A:";
    cin>>a;
    cout<<"Digite la segunda nota Final del Alumno A:";
    cin>>b;
    cout<<"Digite la tercera nota Final del Alumno A:";
    cin>>c;
    NotaFinalMediaAlumnoA = (a+b+c)/3;
    cout<<"La nota final Media del alumno A es: "<<NotaFinalMediaAlumnoA<<endl;



    cout<<"Digite la primera nota Final del Alumno B: ";
    cin>>d;
    cout<<"Digite la segunda nota Final del Alumno B:";
    cin>>e;
    cout<<"Digite la tercera nota Final del Alumno B:";
    cin>>f;
    NotaFinalMediaAlumnoB = (d+e+f)/3;
    cout<<"La nota final Media del alumno B es: "<<NotaFinalMediaAlumnoB<<endl;


    cout<<"Digite la primera nota Final del Alumno C:";
    cin>>g;
    cout<<"Digite la segunda nota Final del Alumno C:";
    cin>>h;
    cout<<"Digite la tercera nota Final del Alumno C:";
    cin>>i;
    NotaFinalMediaAlumnoC = (g+h+i)/3;
    cout<<"La nota final Media del alumno C es: "<<NotaFinalMediaAlumnoC<<endl;





    return 0;
}