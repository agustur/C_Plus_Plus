#include <iostream>

using namespace std;

int main(){
    cout << "Suma, Resta, Multiplicacion y Division de dos numeros ingresados por el usuario" << endl;
    //int numero1, numero2, suma = 0, resta = 0, mult = 0, divi = 0;
    int numero1;
    int numero2;

    cout << "\nIngrese el primer numero: ";
    cin >> numero1;

    cout << "\nIngrese el segundo numero: ";
    cin >> numero2;

    int suma = numero1 + numero2;
    int resta = numero1 - numero2;
    int mult = numero1 * numero2;
    int divi = numero1 / numero2;

    cout << "\nEl resultado de la suma es: " << suma;
    cout << "\nEl resultado de la resta es: " << resta;
    cout << "\nEl resultado de la multiplicacion es: " << mult;
    cout << "\nEl resultado de la division es: " << divi;
    return 0;
}