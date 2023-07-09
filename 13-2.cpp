#include <iostream>

using namespace std;

int main(){
    int n1, n2 ,n3;

    cout << "Ingrese 3 numeros: "; cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3){
        cout << n1 << " es el mayor";
    }

    else if (n2 > n1 && n2 > n3){
        cout << n2 << " es el mayor";
    }

    else if(n3 > n1 && n3 > n2){
        cout << n3 << " es el mayor";
    }

    return 0;
}