/*
24. Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar.
O resultado da operação deve ser acompanhado de uma frase que diga se o número é:

    a) par ou ímpar;
    b) positivo ou negativo;
    c) inteiro ou decimal.
*/

#include <iostream>
#include <math.h> // import floor()
using namespace std;

int main() {

    char operacao;
    float valor1, valor2, resultado;
    cout << "Primeiro valor: ";
    cin >> valor1;
    cout << "Digite uma operacao [+, -, /, *]: ";
    cin >> operacao;
    cout << "Segundo valor: ";
    cin >> valor2;

    if (operacao == '+' || operacao == '-' || operacao == '/' || operacao == '*') {
        if (operacao == '+') {
            resultado = valor1 + valor2;
        } else if (operacao == '-') {
            resultado = valor1 - valor2;
        } else if (operacao == '/') {
            resultado = valor1 / valor2;
        } else if (operacao == '*') {
            resultado = valor1 * valor2;
        }
        cout << "\nO resultado da operacao eh " << resultado << endl;

        if (int(resultado) % 2 == 0) {
            cout << resultado << " eh par" << endl;
        } else {
            cout << resultado << " eh impar" << endl;
        }

        if (resultado > 0) {
            cout << resultado << " eh positivo" << endl;
        } else if (resultado < 0) {
            cout << resultado << " eh negativo" << endl;
        } else {
            cout << resultado << " eh nulo" << endl;
        }

        if (floor(resultado) == resultado) {
            cout << resultado << " eh inteiro" << endl;
        } else {
            cout << resultado << " eh decimal" << endl;
        }
    } else {
        cout << "Operacao invalida!" << endl;
    }

    return 0;
}
