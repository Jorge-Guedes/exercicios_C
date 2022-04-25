/*
15. Faça um programa que leia um número indeterminado de valores, correspondentes a notas,
encerrando a entrada de dados quando for informado um valor igual a -1 (que não deve ser armazenado).
Após esta entrada de dados, faça:

a) Mostre a quantidade de valores que foram lidos;
b) Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
c) Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
d) Calcule e mostre a soma dos valores;
e) Calcule e mostre a média dos valores;
f) Calcule e mostre a quantidade de valores acima da média calculada;
g) Calcule e mostre a quantidade de valores abaixo de sete;
h) Encerre o programa com uma mensagem;
*/

#include <iostream>
using namespace std;

int main() {

    int quantidadeValores=0;
    float valor[40];
    float somaValor=0, mediaValor;

    while (true) {
        cout << "Digite um valor (-1 para sair): ";
        cin >> valor[quantidadeValores];
        if (valor[quantidadeValores] < 0) {
            break;
        }
        quantidadeValores++;
    }

    cout << "\n---------------------------------------------------" << endl;
    cout << "Quantidade de valores lidos: " << quantidadeValores << endl;
    cout << "Valores na ordem em que foram informados: " << endl;
    for (int i=0; i < quantidadeValores; i++) {
        cout << valor[i] << " -> ";
        somaValor += valor[i];
    }

    mediaValor = somaValor / quantidadeValores;

    cout << "\n\nValores na ordem inversa em que foram informados: " << endl;
    for (int i=quantidadeValores-1; i>=0; i--) {
        cout << valor[i] << endl;

    }

    cout << "\nSoma dos valores: " << somaValor << endl;
    cout << "\nMedia dos valores: " << mediaValor << endl;

    cout << "\nQuantidade de valores acima da media (" << mediaValor << ")" << endl;
    for (int i=0; i < quantidadeValores; i++) {
        if (valor[i] > mediaValor) {
            cout << valor[i] << " -> ";
        }
    }

    cout << "\n\nQuantidade de valores abaixo de 7" << endl;
    for (int i=0; i < quantidadeValores; i++) {
        if (valor[i] < 7) {
            cout << valor[i] << " -> ";
        }
    }

    cout << "\n---------------------------------------------------" << endl;
    cout << "PROGRAMA ENCERRADO. OBRIGADO! :)" << endl;

    return 0;
}
