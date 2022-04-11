/*
8. Faça um programa que pergunte o preço de três produtos e informe qual
produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {
    int escolhaProduto;
    float preco1, preco2, preco3, menorPreco;

    cout << "Digite o primeiro preco: R$";
    cin >> preco1;
    cout << "Digite o segundo preco: R$";
    cin >> preco2;
    cout << "Digite o terceiro preco: R$";
    cin >> preco3;

    menorPreco = preco1;
    escolhaProduto = 1;

    if (preco2 < menorPreco) {
        menorPreco = preco2;
        escolhaProduto = 2;
    }
    if (preco3 < menorPreco) {
        menorPreco = preco3;
        escolhaProduto = 3;
    }

    cout << "\nVoce deve comprar o " << escolhaProduto << "º produto custando R$ " << fixed << setprecision(2) << menorPreco << endl;

    return 0;
}
