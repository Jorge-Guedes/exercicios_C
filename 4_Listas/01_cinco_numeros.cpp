
// 1. Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.

#include <iostream>
using namespace std;

int main() {

	const int tam = 5;
	float numeros[tam];

	for (int i=0; i<tam; i++) {
		cout << "Digite o " << i+1 << " numero: ";
		cin >> numeros[i];
	}

	cout << "\n";

	cout << "Os numeros digitados foram: ";
	for (int i=0; i<tam; i++) {
		cout << numeros[i];
		(numeros[i] == tam) ? cout << "" : cout << ", ";
	}

    return 0;
}
