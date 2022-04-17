
// 19. Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.

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

        while (numero < 0 || numero > 1000) {
            cout << "Numero invalido. Digite um numero entre 0 a 1000 [0 para sair]: ";
            cin >> numero;
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
