/*
4. Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas.
Imprima as consoantes.
*/

#include <iostream>
using namespace std;


int main() {

    int consoantes=0;
    const int tamVetor = 10;
	char vetorChar[tamVetor];
	char vogais[5] = {'a','e','i','o','u'};

	for (int i=0; i<tamVetor; i++) {
        cout << i+1 << "� letra: ";
        cin >> vetorChar[i];
	}

	for (int i=0; i<tamVetor; i++) {

	    char letra = vetorChar[i];

        if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u') {
            consoantes++;
        }
	}

	cout << "\nForam lidos " << consoantes << " consoantes" << endl;

    return 0;
}
