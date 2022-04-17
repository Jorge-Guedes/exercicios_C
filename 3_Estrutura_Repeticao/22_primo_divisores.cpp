/*
22. Altere o programa de cálculo dos números primos, informando, caso o número não seja primo,
por quais número ele é divisível.
*/

#include <iostream>
using namespace std;

int main() {

    bool primo;
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    primo = true;

    for (int i=2; i<numero; i++) {
        if (numero % i == 0) {
            primo = false;
            break;
        }
    }

    if (numero < 0)  {
        cout << "\nNumero invalido." << endl;
    } else {
        if (primo) {
            cout << "\nO numero " << numero << " EH PRIMO" << endl;
        } else {
            cout << "\nO numero " << numero << " NAO EH PRIMO" << endl;
            cout << "\nEle eh divisivel por ";
            for (int i=1; i<numero; i++) {
                if (numero % i == 0) {
                    cout << i << " -> ";
                }
            }
            cout << numero << endl;
        }
    }

    return 0;
}
