/*
21. Faça um programa que peça um número inteiro e determine se ele é ou não um número primo.
Um número primo é aquele que é divisível somente por ele mesmo e por 1.
*/

#include <iostream>
using namespace std;

int main() {

    bool primo;
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    primo = true;

    for (int i=2; i<numero; i++) {
        if (numero % i == 0) {
            primo = false;
            break;
        }
    }

    if (numero < 0) {
        cout << "\nNumero invalido." << endl;
    } else {
        if (primo) {
            cout << "\nO numero " << numero << " EH PRIMO" << endl;
        } else {
            cout << "\nO numero " << numero << " NAO EH PRIMO" << endl;
        }
    }

    return 0;
}
