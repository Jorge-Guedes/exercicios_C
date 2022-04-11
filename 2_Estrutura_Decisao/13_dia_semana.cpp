/*
13. Faça um Programa que leia um número e exiba o dia correspondente da semana.
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
*/

#include <iostream>
using namespace std;

int main() {

    int numero_dia;

    cout << "Digite um numero do dia (1 a 7): ";
    cin >> numero_dia;

    switch (numero_dia) {
    case 1:
        cout << "\nO dia eh Domingo" << endl;
        break;
    case 2:
        cout << "\nO dia eh Segunda" << endl;
        break;
    case 3:
        cout << "\nO dia eh Terça" << endl;
        break;
    case 4:
        cout << "\nO dia eh Quarta" << endl;
        break;
    case 5:
        cout << "\nO dia eh Quinta" << endl;
        break;
    case 6:
        cout << "\nO dia eh Sexta" << endl;
        break;
    case 7:
        cout << "\nO dia eh Sabado" << endl;
        break;
    default:
        cout << "\nValor invalido" << endl;
    }
    return 0;
}
