/*
14. Faça um programa que peça 10 números inteiros, calcule e mostre
a quantidade de números pares e a quantidade de números impares.
*/

#include <iostream>
using namespace std;

int main() {

    int numero, par=0, impar=0;

    for (int i=1; i<=10; i++) {
        cout << i << "º numero: ";
        cin >> numero;
        (numero % 2 == 0) ? par++ : impar++; // operador ternario

        /* // sem operador ternario
        if (numero % 2 == 0) {
            par++;
        } else {
            impar++;
        }
        */
    }

    cout << "\nAo todo temos " << par << " numeros pare(s) e " << impar << " numeros impare(s)" << endl;

    return 0;
}

