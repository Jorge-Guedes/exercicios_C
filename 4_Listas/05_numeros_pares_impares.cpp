/*
5. Faça um Programa que leia 20 números inteiros e armazene-os num vetor.
Armazene os números pares no vetor PAR e os números IMPARES no vetor impar.
Imprima os três vetores.
*/

#include <iostream>
using namespace std;

int main() {

	int tam=20, par=0, impar=0;
	float numeros[tam];

	for (int i=0; i<tam; i++) {
		cout << "Digite o " << i+1 << " numero: ";
		cin >> numeros[i];
		(int(numeros[i]) % 2 == 0) ? par++ : impar++;
	}

	cout << "\nDentre esses " << tam << " numeros informados:" << endl;
	cout << par << " sao pares e " << impar << " sao impares" << endl;

    return 0;
}
