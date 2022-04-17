/*
11. Altere o programa anterior para mostrar no final a soma dos números.
*/

#include <iostream>
using namespace std;

int main() {

    int numero1, numero2, soma=0;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "\nEstao no intervalo entre " << numero1 << " e " << numero2 << ":" << endl;

    for (int i = numero1+1; i < numero2; i++) {
        cout << i << ", ";
        soma += i;
    }
    cout << "\n\nA soma desse invervalo eh de " << soma << endl;

    return 0;
}
