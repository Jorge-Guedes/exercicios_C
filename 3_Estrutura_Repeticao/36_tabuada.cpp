/*
36. Desenvolva um programa que faça a tabuada de um número qualquer inteiro que será digitado
pelo usuário, mas a tabuada não deve necessariamente iniciar em 1 e terminar em 10, o valor
inicial e final devem ser informados também pelo usuário, conforme exemplo abaixo:

    Montar a tabuada de: 5
    Começar por: 4
    Terminar em: 7

    Vou montar a tabuada de 5 começando em 4 e terminando em 7:
    5 X 4 = 20
    5 X 5 = 25
    5 X 6 = 30
    5 X 7 = 35

    Obs: Você deve verificar se o usuário não digitou o final menor que o inicial.
*/

#include <iostream>
using namespace std;

int main() {

    int numero, inicio, fim;

    cout << "Montar a tabuada de: ";
    cin >> numero;
    cout << "Começar por: ";
    cin >> inicio;
    cout << "Terminar em: ";
    cin >> fim;

    while (fim < inicio) {
        cout << "ERRO! Voce digitou o valor final menor que o inicio." << endl;
        cout << "\nComecar por: ";
        cin >> inicio;
        cout << "Terminar em: ";
        cin >> fim;
    }

    cout << "\nVou montar a tabuada de " << numero << " comecando em " << inicio << " e terminando em " << fim << ":" << endl;
    for (int i = inicio; i <= fim; i++) {
        cout << numero << " X " << i << " = " << numero * i << endl;
    }

    return 0;
}
