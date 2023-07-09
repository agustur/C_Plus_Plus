#include <iostream>

using namespace std;

int main(){
    float practica, teorica, participacion, nf = 0;

    cout << "Ingrese la nota practica del alumno: "; cin >> practica;
    cout << "Ingrese la nota teorica del alumno: "; cin >> teorica;
    cout << "Ingrese la nota de participacion del alumno: "; cin >> participacion;

    practica = practica * 0.30;
    //practica *= 0.30; (hace lo mismo que arriba pero mas simple)
    teorica = teorica * 0.60;
    //teorica *= 0.60;
    participacion = participacion * 0.10;
    //participacion *= 0.10;

    nf = practica + teorica + participacion;

    cout.precision(3);
    cout << "\nLa nota final del alumno es de: " << nf;
    return 0;
}