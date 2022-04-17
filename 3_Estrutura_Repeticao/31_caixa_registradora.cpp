/*
31. O Sr. Manoel Joaquim expandiu seus negócios para além dos negócios de 1,99 e agora
possui uma loja de conveniências. Faça um programa que implemente uma caixa registradora rudimentar.
O programa deverá receber um número desconhecido de valores referentes aos preços das mercadorias.
Um valor zero deve ser informado pelo operador para indicar o final da compra.
O programa deve então mostrar o total da compra e perguntar o valor em dinheiro que o cliente forneceu,
para então calcular e mostrar o valor do troco. Após esta operação, o programa deverá voltar ao ponto
inicial, para registrar a próxima compra. A saída deve ser conforme o exemplo abaixo:

    Lojas Tabajara

    Produto 1: R$ 2.20
    Produto 2: R$ 5.80
    Produto 3: R$ 0
    Total: R$ 9.00
    Dinheiro: R$ 20.00
    Troco: R$ 11.00
    ...
*/

#include <iostream>
#include <iomanip> // import setprecision();
using namespace std;

int absoluto(int x) {
    if (x < 0) {
        x *= -1;
    }
    return x;
}

int main() {

    int contador=0;
    float precoProduto, total=0, dinheiro, restando, novoDinheiro=0, troco=0;

    cout << "Lojas Tabajara\n\n";

    while (true) {
        cout << "Produto " << contador+1 << ": R$ ";
        cin >> precoProduto;
        total += precoProduto;
        if (precoProduto == 0) {
            break;
        }
        contador++;
    }

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
    cout << "Dinheiro: R$ ";
    cin >> dinheiro;
    cout << "\n";

    novoDinheiro = dinheiro;

    while (total > novoDinheiro) {
        restando = total - novoDinheiro;
        cout << "Ainda faltam R$ " << fixed << setprecision(2) << restando << endl;
        cout << "Dinheiro: R$ ";
        cin >> dinheiro;
        novoDinheiro += dinheiro;
    }

    if (novoDinheiro > total) {
        troco = novoDinheiro - total;
    }

    cout << "\n============= RESULTADO =============\n";
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
    cout << "Dinheiro: R$ " << fixed << setprecision(2) << novoDinheiro << endl;
    cout << "Troco: R$ " << fixed << setprecision(2) << troco << endl;

    return 0;
}
