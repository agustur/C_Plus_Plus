#include <iostream>

using namespace std;

int main(){
    int x, y, aux = 0;

    cout << "Ingrese el valor de x: "; cin >> x;
    cout << "Ingrese el valor de y: "; cin >> y;

    aux = x;
    x = y;
    y = aux;

    cout << "\nEl nuevo valor de la variable x es: " << x;
    cout << "\nEl nuevo valor de la variable y es: " << y;

    return 0;
}