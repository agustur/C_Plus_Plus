#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a, b, c, resultado1 = 0, resultado2 = 0;

    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;

    resultado1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
    resultado2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);

    cout.precision(3);
    cout << "\nEl resultado numero uno de la operacion es: " << resultado1 << endl;
    cout << "\nEl resultado numero uno de la operacion es: " << resultado2 << endl;

    return 0;
}