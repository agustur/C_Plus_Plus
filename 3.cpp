#include <iostream>
#include <string>

using namespace std;

//comentarios de una linea

/*
comentarios
de
varias
lineas
*/


int main(){
    int entero;
    cout << "Escriba un numero entero: " << endl;
    cin >> entero;
    cout << "El numero que digito es: " << entero << endl;

    float flotante;
    cout << "Escriba un numero flotante: " << endl;
    cin >> flotante;
    cout << "El numero que digito es: " << flotante  << endl;

    double mayor;
    cout << "Escriba un numero double/largo: " << endl;
    cin >> mayor;
    cout << "El numero que digito es: " << mayor << endl;

    char caracteres;
    cout << "Escriba una letra: " << endl;
    cin >> caracteres;
    cout << "La letra que escribio es: " << caracteres << endl;

    string letras;
    cout << "Escriba unas letras: " << endl;
    cin >>  letras;
    cout << "Las letras que escribio son: " << letras << endl;

    return 0;
}