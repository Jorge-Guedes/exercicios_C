/*
18. Faça um programa que, dado um conjunto de N números,
determine o menor valor, o maior valor e a soma dos valores.
*/

#include <iostream>
#include <cmath> // import INFINITY
using namespace std;

int main() {

    float numero, maior, menor, soma=0;
    int contador=0;

    maior = -INFINITY;
    menor = INFINITY;

    while (true) {
        cout << "Digite um numero [0 para sair]: ";
        cin >> numero;
        if (numero == 0) {
            break;
        }

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        soma += numero;
        contador += 1;
    }

    cout << "\nAo todo foram digitados " << contador << " numeros" << endl;
    cout << "O maior valor eh " << maior << " e o menor " << menor << endl;

    return 0;
}
