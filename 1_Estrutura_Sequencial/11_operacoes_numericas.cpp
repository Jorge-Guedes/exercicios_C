/*
11. Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
	o produto do dobro do primeiro com metade do segundo .
	a soma do triplo do primeiro com o terceiro.
	o terceiro elevado ao cubo
*/

#include <iostream>
#include <math.h> // importar pow()
using namespace std;

int main() {
    int numero_inteiro1, numero_inteiro2;
    float numero_real, operacao1, operacao2, operacao3;

    cout << "Digite um numero inteiro: ";
    cin >> numero_inteiro1;
    cout << "Digite outro numero inteiro: ";
    cin >> numero_inteiro2;
    cout << "Agora digite um numero real: ";
    cin >> numero_real;

    operacao1 = (numero_inteiro1 * 2) * ((float)numero_inteiro2 / 2);
    operacao2 = (numero_inteiro1 * 3) + numero_real;
    operacao3 = pow(numero_real, 3);

    cout << "\nO produto do primeiro com metade do segundo: " << operacao1 << endl;
    cout << "A soma do triplo do primeiro com o terceiro: " << operacao2 << endl;
    cout << "O terceiro elevado ao cubo: " << operacao3 << endl;

    return 0;
}
