/*
32. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.
Ex.: 5!=5.4.3.2.1=120. A saída deve ser conforme o exemplo abaixo:

Fatorial de: 5
5! =  5 . 4 . 3 . 2 . 1 = 120
*/

#include <iostream>
using namespace std;

int main() {

    int numero;
    long int fatorial = 1;

    cout << "Digite um numero para ver o fatorial: ";
    cin >> numero;

    cout << numero << "! = ";

    for (int i = numero; i >= 1; i--) {
        cout << i;
        (i > 1) ? cout << " . " : cout << " = ";
        fatorial *= i;
    }

    cout << fatorial;

    cout << "\n";

    return 0;
}
