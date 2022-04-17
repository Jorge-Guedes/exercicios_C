/*
16. A série de Fibonacci é formada pela seqüência 0,1,1,2,3,5,8,13,21,34,55,...
Faça um programa que gere a série até que o valor seja maior que 500.
*/

#include <iostream>
using namespace std;

int main() {

    int numero=1, numero_anterior=0, termos = 0, auxiliar;

    cout << "\n" << numero_anterior << ", ";

    while (true) {
        cout << numero << ", ";
        if (numero > 500) {
            break;
        }
        auxiliar = numero;
        numero += numero_anterior;
        numero_anterior = auxiliar;
        termos += 1;
    }

    cout << "\n";
    return 0;
}
