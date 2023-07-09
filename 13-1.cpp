#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    cout << "Ingrese dos numeros: "; cin >> n1 >> n2;

    if (n1 > n1){
        cout << "El mayor es: " << n1;
    }

    else if (n1 == n2){
        cout << "Los dos numeros son iguales";
    }

    else {
        cout << "El mayor es: " << n2;
    }

    return 0;
}