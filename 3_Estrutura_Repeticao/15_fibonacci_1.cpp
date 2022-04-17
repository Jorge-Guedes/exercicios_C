/*
15. A série de Fibonacci é formada pela sequência 1,1,2,3,5,8,13,21,34,55,...
Faça um programa capaz de gerar a série até o n−ésimo termo.
*/

#include <iostream>
using namespace std;

int main() {

    int numero=1, numero_anterior=0, termos, auxiliar;
    cout << "Numero de termos: ";
    cin >> termos;

    for (int i=0; i < termos; i++) {
        cout << numero << ", ";
        auxiliar = numero;
        numero += numero_anterior;
        numero_anterior = auxiliar;
    }

    cout << "\n";

    return 0;
}
