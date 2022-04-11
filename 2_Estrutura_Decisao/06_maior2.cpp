// 6. Faça um Programa que leia três números e mostre o maior deles.


#include <iostream>
using namespace std;

int main() {
    float numero1, numero2, numero3;
    float maior = numero1;

    cout << "Digite o 1º numero: ";
    cin >> numero1;
    cout << "Digite o 2º numero: ";
    cin >> numero2;
    cout << "Digite o 3º numero: ";
    cin >> numero3;

    if (numero1 > numero2 && numero1 > numero3) {
        cout << "\nO maior eh " << numero1 << endl;
    } else if (numero2 > numero1 && numero2 > numero3) {
        cout << "\nO maior eh " << numero2 << endl;
    } else if (numero3 > numero1 && numero3 > numero2) {
        cout << "\nO maior eh " << numero3 << endl;
    } else {
        cout << "\nTodos sao iguais" << endl;
    }

    return 0;
}
