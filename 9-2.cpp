#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double cat_a, cat_b, hipo = 0;

    cout << "Ingrese el valor del cateto a: "; cin >> cat_a;
    cout << "Ingrese el valor del cateto b: "; cin >> cat_b;


    hipo = pow(cat_a,2) + pow(cat_b,2);
    
    cout.precision(3);
    cout << "\nLa hipotenusa del triangulo rectangulo es: " << hipo;
    return 0;
}