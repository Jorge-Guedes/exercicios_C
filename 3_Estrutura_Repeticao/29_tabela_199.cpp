/*
29. O Sr. Manoel Joaquim possui uma grande loja de artigos de R$ 1,99, com cerca de 10 caixas.
Para agilizar o cálculo de quanto cada cliente deve pagar ele desenvolveu um tabela que contém
o número de itens que o cliente comprou e ao lado o valor da conta. Desta forma a atendente
do caixa precisa apenas contar quantos itens o cliente está levando e olhar na tabela de preços.
Você foi contratado para desenvolver o programa que monta esta tabela de preços, que conterá
os preços de 1 até 50 produtos, conforme o exemplo abaixo:

    Lojas Quase Dois - Tabela de precos

    1 - R$ 1.99
    2 - R$ 3.98
    ...
    50 - R$ 99.50
*/

#include <iostream>
#include <iomanip> // import setprecision();
using namespace std;

int main() {

    int quantidadeItems;
    float total;

    cout << "----------- Mercadinho Manoel -----------" << endl;
    cout << "Quantidade de itens do cliente: ";
    cin >> quantidadeItems;

    while (quantidadeItems < 1 || quantidadeItems > 50) {
        cout << "Quantidade invalida. Digite de 1 a 50: ";
        cin >> quantidadeItems;
    }

    for (int i=1; i <= quantidadeItems; i++) {
        total = 1.99 * i;
    }

    if (quantidadeItems == 1) {
        cout << "\nLevando " << quantidadeItems << " item, o total sera de R$" << fixed << setprecision(2) << total << endl;
    } else {
        cout << "\nLevando " << quantidadeItems << " items, o total sera de R$" << fixed << setprecision(2) << total << endl;
    }

    return 0;
}
