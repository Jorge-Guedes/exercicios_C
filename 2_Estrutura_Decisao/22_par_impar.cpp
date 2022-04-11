/*
22. Faça um Programa que peça um número inteiro e determine se ele é par ou impar.
Dica: utilize o operador módulo (resto da divisão).
*/

#include <iostream>
using namespace std;

int main() {

    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " eh PAR" << endl;
    } else {
        cout << numero << " eh IMPAR " << endl;
    }

    return 0;
}
