/*
17. Faça um programa que calcule o fatorial de um número inteiro
fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120
*/

#include <iostream>
using namespace std;

int main() {

    int numero;
    long int fatorial = 1;
    cout << "\nDigite um numero: ";
    cin >> numero;
    cout << numero << "! = ";

    for (int i = numero; i >= 1; i--) {
        fatorial *= i;
        cout << i;
        (i > 1) ? cout << " x " : cout << " = ";
    }

    cout << fatorial << endl;

    return 0;
}
