/*
13. Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro
número elevado ao segundo número. Não utilize a função de potência da linguagem.
*/

#include <iostream>
using namespace std;

int main() {
    int base, expoente, potencia=1;

    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;

    for (int i=1; i<=expoente; i++) {
        potencia *= base;
    }

    cout << "\n" << base << " elevado a " << expoente << " equivale a " << potencia << endl;

    return 0;
}
