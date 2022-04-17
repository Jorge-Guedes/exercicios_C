/*
37. Uma academia deseja fazer um senso entre seus clientes para descobrir o mais alto,
o mais baixo, a mais gordo e o mais magro, para isto você deve fazer um programa que
pergunte a cada um dos clientes da academia seu código, sua altura e seu peso.
O final da digitação de dados deve ser dada quando o usuário digitar 0 (zero) no campo código.
Ao encerrar o programa também deve ser informados os códigos e valores do clente mais alto,
do mais baixo, do mais gordo e do mais magro, além da média das alturas e dos pesos dos clientes
*/

#include <iostream>
#include <iomanip> // import setprecision()
#include <cmath> // import INFINITY
using namespace std;

int main() {

    int codigo=1, quantidadeCodigos;
    float altura, peso, somaAltura=0, somaPeso=0, mediaAltura, mediaPeso,
    maiorAltura, menorAltura, maiorPeso, menorPeso;

    maiorAltura = -INFINITY;
    menorAltura = INFINITY;
    maiorPeso = -INFINITY;
    menorPeso = INFINITY;

    while (true) {
        cout << "Seu codigo (0 para encerrar): ";
        cin >> codigo;
        if (codigo == 0) {
            break;
        }
        quantidadeCodigos += 1;
        cout << "Sua altura: ";
        cin >> altura;
        cout << "Seu peso: ";
        cin >> peso;
        cout << "--------------" << endl;
        somaAltura += altura;
        somaPeso += peso;

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }
        if (peso > maiorPeso) {
            maiorPeso = peso;
        }
        if (peso < menorPeso) {
            menorPeso = peso;
        }
    }

    mediaAltura = somaAltura / quantidadeCodigos;
    mediaPeso = somaPeso / quantidadeCodigos;

    if (quantidadeCodigos != 0) {
        cout << "\nForam informados " << quantidadeCodigos << " codigos:" << endl;
        cout << "A altura mais alta foi de " << fixed << setprecision(2) << maiorAltura << "m" << endl;
        cout << "A altura mais baixa foi de " << setprecision(2) << menorAltura << "m" << endl;
        cout << "A media de altura foi de " << setprecision(2) << mediaAltura << "m" << endl;
        cout << "O maior peso encontrado foi " << setprecision(1) << maiorPeso << " Kg" << endl;
        cout << "O menor peso encontrado foi " << setprecision(1) << menorPeso << " Kg" << endl;
        cout << "A media do peso foi de " << setprecision(1) << mediaPeso << " Kg" << endl;
    }

    return 0;
}
