#include <iostream>

using namespace std;

int main() {
    float a, b, resultado = 0;

    cout <<"Ingrese el valor de a: "; cin >> a;
    cout <<"Ingrese el valor de b: "; cin >> b;

    resultado = (a/b) + 1;
    cout.precision(3);
    cout << "\nEl resultado es: " << resultado;

    return 0;
}