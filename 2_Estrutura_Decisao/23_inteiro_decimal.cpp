/*
23. Faça um Programa que peça um número e informe se o número é inteiro ou decimal.
Dica: utilize uma função de arredondamento.
*/

#include <iostream>
#include <math.h> // import floor()
using namespace std;

int main() {

    float numero, numero_inteiro;

    cout << "Digite um numero: ";
    cin >> numero;
    cout << "\n";

    numero_inteiro = floor(numero);

    if (numero_inteiro == numero) {
        cout << numero << " eh inteiro" << endl;
    } else {
        cout << numero << " eh decimal" << endl;
    }

    return 0;
}
