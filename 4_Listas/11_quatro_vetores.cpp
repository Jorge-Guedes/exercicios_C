
// 11. Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.

#include <iostream>
using namespace std;

int main() {
    const int tam=10;
    int vetorA[tam];
    int vetorB[tam];
    int vetorC[tam];
    int vetorD[tam*2];


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
    cout << "\nVetor C: " << endl;
    cout << "-------------------\n";
    for (int c=0; c<tam; c++) {
        cout << c+1 << "º numero do vetor C: ";
        cin >> vetorC[c];
    }

    for (int a=0, b=0; a < tam; a++, b+=3) {
        vetorD[b] = vetorA[a];
        vetorD[b+1] = vetorB[a];
        vetorD[b+2] = vetorC[a];
    }
    cout << "\nVetor D: " << endl;
    cout << "-------------------\n";
    for (int d=0; d<tam*3; d++) {
        cout << vetorD[d];
        (d == tam*3-1) ? cout << "" : cout << " -> ";
    }

    return 0;
}
