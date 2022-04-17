/*
48. Faça um programa que peça um numero inteiro positivo e em seguida mostre este numero invertido.

	Exemplo:

  	12376489
	=> 98467321
*/

#include <iostream>
using namespace std;

int main() {

    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;
    while (numero < 0) {
        cout << "Alerta! O numero deve ser positivo!" << endl;
        cout << "Digite o numero: ";
        cin >> numero;
    }

    cout << numero << endl;
    cout << "=> ";

    while (numero > 0) {
        cout << numero % 10;
        numero -= numero % 10;
        numero /= 10;
    }

    return 0;
}
