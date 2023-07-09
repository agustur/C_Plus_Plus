#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, n4, nfm = 0;

    cout << "Ingrese la nota del primer alumno: "; cin >> n1;
    cout << "Ingrese la nota del segundo alumno: "; cin >> n2;
    cout << "Ingrese la nota del tercer alumno: "; cin >> n3;
    cout << "Ingrese la nota del cuarto alumno: "; cin >> n4;
    
    nfm = (n1 + n2 + n3 + n4) / 4;

    cout.precision(3);
    cout << "El resultado de la nota final media de los cuatro alumnos es: " << nfm;
    return 0;
}