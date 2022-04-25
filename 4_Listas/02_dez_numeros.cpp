
// 2. Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.

#include <iostream>
using namespace std;

int main() {

	const int tam = 10;
	float numeros[tam];

	for (int i=0; i<tam; i++) {
		cout << "Digite o " << i+1 << " numero: ";
		cin >> numeros[i];
	}

	cout << "\nOrdem inversa: ";

	for (int i=tam-1; i>=0; i--) {
		cout << numeros[i];
		(i == 0) ? cout << "" : cout << ", ";
	}

    return 0;
}
