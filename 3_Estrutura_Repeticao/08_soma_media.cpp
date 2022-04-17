
// 8. Faça um programa que leia 5 números e informe a soma e a média dos números.

#include <iostream>
#include <iomanip> // import setprecision();
using namespace std;

int main() {

    float numero, soma=0, media;
    int i;

    for (i=1; i<=5; i++) {
        cout << i << "º numero: ";
        cin >> numero;
        soma += numero;
    }

    media = soma / 5;
    cout << "\nA media eh " << fixed << setprecision(1) << media << endl;

    return 0;
}
