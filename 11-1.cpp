#include <iostream>

using namespace std;

int main(){
    int numero, dato = 5;
    cout << "Ingrese el numero que quiera: "; cin >> numero;

    if (numero == 5){
        cout << "El numero que ingreso es igual a 5";
    }
    /*
    el (else if) cumple la funcion del (elif)
    se pueden usar en not, and y or
    */
    else{
        cout << "El numero que ingreso es diferente a 5";
    }

    return 0;
}