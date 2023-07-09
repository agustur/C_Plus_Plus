#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int edad;
    char sexo[10];
    float altura;

    cout << "Ingrese su edad: "; cin >> edad;
    cout << "Ingrese su sexo: "; cin >> sexo;
    cout << "Ingrese su altura: "; cin >> altura;

    /*
    cout << "Edad: " << setw(2) << edad << " años" << endl
    cout << fixed << setprecision(2);
    
    fixed para fijar la notación en punto fijo
    setw() es setwight que basicamente establece el ancho del campo de salida
    setprecision() para establecer la precisión decimal en 2 dígitos.
    #include <iomanip> hay que agregar esa libreria para que funcione
    */
    cout << "\nSu edad es " << edad << " años" << endl;
    cout << "Su sexo es " << sexo << endl;
    cout << fixed << setprecision(2);
    cout << "Su altura es " << setw(2) << altura << " metros" << endl;

    return 0;
}

