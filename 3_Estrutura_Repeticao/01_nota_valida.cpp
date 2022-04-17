/*
1. Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem
caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.
*/

#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Digite uma nota entre 0 e 10: ";
    cin >> nota;

    while (nota < 0 || nota > 10) {
        cout << "Nota invalida!. Digite uma nota entre 0 e 10: ";
        cin >> nota;
    }

    cout << "\nA sua nota foi: " << nota << endl;

    return 0;
}
