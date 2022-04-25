/*
8. Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação
no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.
*/

#include <iostream>
using namespace std;

int main() {

	const int tam = 5;
	int idade[tam];
	float altura[tam];

	for (int i=0; i<tam; i++) {
		cout << "Pessoa " << i+1 << ":" << endl;
		cout << "Idade: ";
		cin >> idade[i];
		cout << "Altura: ";
		cin >> altura[i];
		cout << "------------------" << endl;
	}

	cout << "\nRESULTADO: " << endl;
	cout << "------------------" << endl;

	for (int i=tam-1; i>=0; i--) {
        cout << "Pessoa " << i+1 << " tem " << idade[i] << " anos com " << altura[i] << " cm de altura." << endl;
	}

    return 0;
}
