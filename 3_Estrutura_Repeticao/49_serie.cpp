/*
49. Faça um programa que mostre os n termos da Série a seguir:

  S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m.

Imprima no final a soma da série.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    int termos;
    float numerador=1, denominador=1, soma=0;

    cout << "Digite o numero de termos: ";
    cin >> termos;

    cout << "S = ";

    for (int i=0; i<termos; i++) {
        cout << numerador << "/" << denominador;
        (i == termos-1) ? cout << "." : cout << " + ";
        soma += numerador / denominador;
        numerador++;
        denominador+=2;
    }

    cout << "\n\nA soma dos termos foi " << fixed << setprecision(2) << soma << endl;

    return 0;
}
