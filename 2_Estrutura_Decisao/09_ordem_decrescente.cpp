// 9. Faça um Programa que leia três números e mostre-os em ordem decrescente.

#include <iostream>
using namespace std;

int main() {

    float numero1, numero2, numero3, numero4;

     cout << "Digite o 1º numero: ";
     cin >> numero1;
     cout << "Digite o 2º numero: ";
     cin >> numero2;
     cout << "Digite o 3º numero: ";
     cin >> numero3;

     cout << "\n";

     if (numero1 > numero2 && numero2 > numero3) {
        cout << "A ordem decrescente eh " << numero1 << " -> " << numero2 << " -> " << numero3 << endl;
     } else if (numero1 > numero3 && numero3 > numero2) {
        cout << "A ordem decrescente eh " << numero1 << " -> " << numero3 << " -> " << numero2 << endl;
     } else if (numero2 > numero1 && numero1 > numero3) {
         cout << "A ordem decrescente eh " << numero2 << " -> " << numero1 << " -> " << numero3 << endl;
     } else if (numero2 > numero3 && numero3 > numero1) {
         cout << "A ordem decrescente eh " << numero2 << " -> " << numero3 << " -> " << numero1 << endl;
     } else if (numero3 > numero1 && numero1 > numero2) {
         cout << "A ordem decrescente eh " << numero3 << " -> " << numero1 << " -> " << numero2 << endl;
     } else {
        cout << "A ordem decrescente eh " << numero3 << " -> " << numero2 << " -> " << numero1 << endl;
     }

    return 0;
}
