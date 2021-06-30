#include <iostream>
#include <conio.h>
using namespace std;

int main()  {
  int num, contador = 0;

    do
    {
        cout << "\nEscriba un numero: ";
        cin >> num;

        if (num > 0)
        {
            contador++;
        }
    } while (num != 0);

    cout << "El numero de valores mayores de 0 son: " << contador;

    getch();
    return 0;
}

