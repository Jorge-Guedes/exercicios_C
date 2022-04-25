/*
7. Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma,
a multiplicação e os números.
*/

#include <iostream>
using namespace std;

int main() {

	int tam=2, soma=0, multiplicacao=1;
	int vetor[tam];

	for (int i=0; i<tam;i++) {
		cout << i+1 << " numero: ";
		cin >> vetor[i];
		soma += vetor[i];
		multiplicacao *= vetor[i];
	}

	cout << "\nNumeros: ";
	for (int i=0; i<tam;i++) {
		cout << vetor[i];
		(i == tam-1) ? cout << "" : cout << ",";
	}

	cout << "\nSoma dos numeros: " << soma  << endl;
	cout << "Multiplicacao dos numeros: " << multiplicacao << endl;


    return 0;
}
