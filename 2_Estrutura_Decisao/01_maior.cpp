// 1. Faça um Programa que peça dois números e imprima o maior deles.

#include <iostream>
using namespace std;

int main() {
    float numero1, numero2;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << numero1 << " eh maior que " << numero2 << endl;
    } else if (numero2 > numero1) {
        cout << numero2 << " eh maior que " << numero1 << endl;
    } else {
        cout << "Os numeros sao iguais!" << endl;
    }

    return 0;
}
