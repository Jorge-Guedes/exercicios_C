/*
9. Faça um Programa que leia um vetor A com 10 números inteiros,
calcule e mostre a soma dos quadrados dos elementos do vetor.
*/

#include <iostream>
using namespace std;

int main() {

    const int tam=2;
    int vetorA[tam], vetorA_quadrado[tam];
    long int somaQuadrados=0;

    for (int i=0; i<tam; i++) {
        cout << i+1 << "º numero: ";
        cin >> vetorA[i];
        somaQuadrados += vetorA[i] * vetorA[i];
    }

    cout << "\nA soma dos quadrados desses " << tam << " numeros foi de " << somaQuadrados << endl;

    return 0;
}
