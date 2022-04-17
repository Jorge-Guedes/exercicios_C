/*
23. Faça um programa que mostre todos os primos entre 1 e N sendo N um número inteiro fornecido pelo usuário.
O programa deverá mostrar também o número de divisões que ele executou para encontrar os números primos.
Serão avaliados o funcionamento, o estilo e o número de testes (divisões) executados.
*/

#include <iostream>
using namespace std;

int main() {

    bool primo;
    int numero, divisoes=2;

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
            divisoes = 1;
            cout << "\nO numero " << numero << " NAO EH PRIMO" << endl;
            cout << "\nEle eh divisivel por ";
            for (int i=1; i<numero; i++) {
                if (numero % i == 0) {
                    cout << i << " -> ";
                    divisoes += 1;
                }
            }
            cout << numero << endl;
            cout << "Ao todo esse numero possui " << divisoes << " divisoes" << endl;
        }
    }

    return 0;
}
