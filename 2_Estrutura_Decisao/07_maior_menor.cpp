// 7. Faça um Programa que leia três números e mostre o maior e o menor deles.

#include <iostream>
using namespace std;

int main() {
    float numero1, numero2, numero3, maior, menor;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;
    cout << "Digite o terceiro numero: ";
    cin >> numero3;

    maior = numero1;
    if (numero2 > maior) {
        maior = numero2;
    }
    if (numero3 > maior) {
        maior = numero3;
    }

    menor = numero1;
    if (numero2 < menor) {
        menor = numero2;
    }
    if (numero3 < menor) {
        menor = numero3;
    }

    cout << "\nO maior eh " << maior << endl;
    cout << "O menor eh " << menor << endl;
    return 0;
}
