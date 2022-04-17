
// 7. Faça um programa que leia 5 números e informe o maior número.

#include <iostream>
#include <cmath> // import INFINITY
using namespace std;

int main() {

    float numero, maior;
    int i;

    maior = -INFINITY;

    for (i=1; i<=5; i++) {
        cout << "Digite o " << i << "º numero: ";
        cin >> numero;
        if (numero > maior) {
            maior = numero;
        }
    }

    cout << "\nO maior eh " << maior << endl;

    return 0;
}
