/*
10. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor
de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.
*/

#include <iostream>
using namespace std;

int main() {

    const int tam=10;
    int vetorA[tam];
    int vetorB[tam];
    int vetorC[tam*2];

    cout << "\nVetor A: " << endl;
    cout << "-------------------\n";
    for (int a=0; a<tam; a++) {
        cout << a+1 << "º numero do vetor A: ";
        cin >> vetorA[a];
    }
    cout << "\nVetor B: " << endl;
    cout << "-------------------\n";
    for (int b=0; b<tam; b++) {
        cout << b+1 << "º numero do vetor B: ";
        cin >> vetorB[b];
    }

    for (int a=0, b=0; a < tam; a++, b+=2) {
        vetorC[b] = vetorA[a];
        vetorC[b+1] = vetorB[a];
    }
    cout << "\nVetor C: " << endl;
    cout << "-------------------\n";
    for (int c=0; c<tam*2; c++) {
        cout << vetorC[c];
        (c == tam*2-1) ? cout << "" : cout << " -> ";
    }

    return 0;
}
