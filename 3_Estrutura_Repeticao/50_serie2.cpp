
// 50. Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um programa que calcule o valor de H com N termos.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int termos;
    float numerador=1, denominador=2, soma=0;

    cout << "Numero de termos: ";
    cin >> termos;

    if (termos > 0) {
        cout << "H = 1 + ";
    }

    for (int i=1; i<=termos; i++) {
        cout << numerador << "/" << denominador;
        (i == termos) ? cout << "." : cout << " + ";
        soma += 1 / float(i);
        denominador++;
    }

    cout << "\n\nA soma dos termos foi " << fixed << setprecision(2) << soma << endl;

    return 0;
}
