/*
30. O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar
a metodologia da tabelinha, que já é um sucesso na sua loja de 1,99.
Você foi contratado para desenvolver o programa que monta a tabela de preços de pães,
de 1 até 50 pães, a partir do preço do pão informado pelo usuário, conforme o exemplo abaixo:

    Preço do pão: R$ 0.18
    Panificadora Pão de Ontem - Tabela de preços
    1 - R$ 0.18
    2 - R$ 0.36
    ...
    50 - R$ 9.00
*/

#include <iostream>
#include <iomanip> // import setprecision();
using namespace std;

int main() {

    int quantidadePaes;
    float total;

    cout << "----------- Padaria Manoel -----------" << endl;

    cout << "Quantidade de paes: ";
    cin >> quantidadePaes;

    while (quantidadePaes < 1 || quantidadePaes > 50) {
        cout << "Quantidade invalida. Digite de 1 a 50: ";
        cin >> quantidadePaes;
    }

    for (int i=1; i <= quantidadePaes; i++) {
        total = 0.18 * i;
    }

    if (quantidadePaes == 1) {
        cout << "\nLevando " << quantidadePaes << " pao, o total sera de R$" << fixed << setprecision(2) << total << endl;
    } else {
        cout << "\nLevando " << quantidadePaes << " paes, o total sera de R$" << fixed << setprecision(2) << total << endl;
    }

    return 0;
}
