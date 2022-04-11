/*
15. Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem
ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

Dicas:

    a) Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
    b) Triângulo Equilátero: três lados iguais;
    c) Triângulo Isósceles: quaisquer dois lados iguais;
    d) Triângulo Escaleno: três lados diferentes;
*/

#include <iostream>
using namespace std;

int main() {

    int lado1, lado2, lado3;

    cout << "Primeiro lado do triangulo: ";
    cin >> lado1;
    cout << "Segundo lado do triangulo: ";
    cin >> lado2;
    cout << "Terceiro lado do triangulo: ";
    cin >> lado3;

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        cout << "\nPode formar um triangulo ";
        if ((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)) {
            cout << "EQUILATERO!" << endl;
        } else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3) ) {
            cout << "ISOSCELES!" << endl;
        } else {
            cout << "ESCALENO!" << endl;
        }
    } else {
        cout << "\nNAO PODE formar um triangulo" << endl;
    }

    return 0;
}
