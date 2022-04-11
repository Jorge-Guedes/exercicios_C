/*
2. Faça um Programa que peça um valor e mostre na tela
se o valor é positivo ou negativo.
*/

#include <iostream>
using namespace std;

int main() {

    float valor;

    cout << "Digite um valor: ";
    cin >> valor;

    if (valor > 0) {
        cout << valor << " Eh POSITIVO!" << endl;
    } else if (valor < 0) {
        cout << valor << " Eh NEGATIVO!" << endl;
    } else if (valor == 0) {
        cout << valor << " Eh NEUTRO!" << endl;
    }

    return 0;
}
