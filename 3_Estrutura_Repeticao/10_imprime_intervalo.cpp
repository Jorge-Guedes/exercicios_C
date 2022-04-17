/*
10. Faça um programa que receba dois números inteiros e gere os números inteiros que estão
no intervalo compreendido por eles.
*/

#include <iostream>
using namespace std;

int main() {

    int numero1=0, numero2=0;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "\nEstao no intervalo entre " << numero1 << " e " << numero2 << ":" << endl;

    for (int i = numero1+1; i < numero2; i++) {
        if (numero1 == NULL || numero2 == NULL) {
            break;
        }
        cout << i << ", ";
    }
    cout << "\n";

    return 0;
}
