#include <iostream>

using namespace std;

int main (){
    int numero;
    cout << "Introduzca un numero entre 1 y 5: "; cin >> numero;
    switch (numero){
        case 1: cout << "\nEl numero es 1"; break;
        case 2: cout << "\nEl numero es 2"; break;
        case 3: cout << "\nEl numero es 3"; break;
        case 4: cout << "\nEl numero es 4"; break;
        case 5: cout << "\nEl numero es 5"; break;
        default: cout << "\nEl numero no esta entre los valores correctos (1-5)"; break;
    }

    return 0;
}