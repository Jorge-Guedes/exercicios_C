/*
20. Altere o programa de cálculo do fatorial, permitindo ao usuário calcular
o fatorial várias vezes e limitando o fatorial a números inteiros positivos e menores que 16.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    int numero, fatorial = 1;

    while (true) {
        cout << "\nDigite um numero [0 para sair]: ";
        cin >> numero;
        if (numero == 0) {
            break;
        }

        while (numero < 0 || numero >= 16) {
            cout << "\Numero invalido. Digite um numero entre 0 a 15 [0 para sair]: ";
            cin >> numero;
        }
        cout << numero << "! = ";

        for (int i = numero; i >= 1; i--) {
            fatorial *= i;
            cout << i;
            (i > 1) ? cout << " x " : cout << " = ";
        }

        cout << fatorial << endl;
        fatorial = 1;

    }

    return 0;
}
