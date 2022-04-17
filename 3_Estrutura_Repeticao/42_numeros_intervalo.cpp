/*
42. Faça um programa que leia uma quantidade indeterminada de números positivos e conte quantos deles
estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100].
A entrada de dados deverá terminar quando for lido um número negativo.
*/

#include <iostream>
using namespace std;

int main() {

	int numero, intervalo25=0, intervalo50=0, intervalo75=0, intervalo100=0;

	while (true) {
        cout << "Digite um numero inteiro de 0 a 100 (-1 para sair): ";
        cin >> numero;
        if (numero < 0) {
            break;
        }
        if (numero <= 25) {
            intervalo25++;
        } else if (numero <= 50) {
            intervalo50++;
        } else if (numero <= 75) {
            intervalo75++;
        } else if (numero <= 100) {
            intervalo100++;
        } else {
            cout << "Numero invalido!" << endl;
        }
	}

    cout << "\nDos numeros digitados:" << endl;
    if (intervalo25 > 0) {
        cout << intervalo25 << " foram de [0-25]" << endl;
    }
    if (intervalo50 > 0) {
        cout << intervalo50 << " foram de [26-50]" << endl;
    }
    if (intervalo75 > 0) {
        cout << intervalo75 << " foram de [51-75]" << endl;
    }
    if (intervalo100 > 0) {
        cout << intervalo100 << " foram de [76-100]" << endl;
    }

    return 0;
}
