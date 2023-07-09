#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float x, y, resultado = 0;

    cout << "Ingrese el valor de x: "; cin >> x;
    cout << "Ingrese el valor de y: "; cin >> y;

    resultado = (sqrt(x)) / (pow(y,2)-1);

    cout.precision(3);
    cout << "El resultado de la operacion es: " << resultado;
    return 0;
}