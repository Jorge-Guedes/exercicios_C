// 3. Faça um Programa que peça dois números e imprima a soma.

#include <iostream>
using namespace std;

int main() {
    float numero1, numero2, soma;
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;
    soma = numero1 + numero2;
    cout << "\nA soma entre " << numero1 << " e " << numero2 << " eh igual a " << soma << endl;
}
