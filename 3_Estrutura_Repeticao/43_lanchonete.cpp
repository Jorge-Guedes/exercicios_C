/*
43. O cardápio de uma lanchonete é o seguinte:

Especificação   Código  Preço
Cachorro Quente 100     R$ 1,20
Bauru Simples   101     R$ 1,30
Bauru com ovo   102     R$ 1,50
Hambúrguer      103     R$ 1,20
Cheeseburguer   104     R$ 1,30
Refrigerante    105     R$ 1,00

Faça um programa que leia o código dos itens pedidos e as quantidades desejadas.
Calcule e mostre o valor a ser pago por item (preço * quantidade) e o total geral do pedido.
Considere que o cliente deve informar quando o pedido deve ser encerrado.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    char opcao;
    int codigo, quantidade, quantidadeProduto100=0, quantidadeProduto101=0, quantidadeProduto102=0;
    int quantidadeProduto103=0, quantidadeProduto104=0, quantidadeProduto105=0;
    float subtotal, total;

    while (true) {
        system("clear"); // linux
        //system("cls"); // windows
        cout << "======= CARDAPIO LACHONETE =======\n\n";
        cout << "Especificacao   Codigo  Preco" << endl;
        cout << "Cachorro Quente 100     R$ 1,20" << endl;
        cout << "Bauru Simples   101     R$ 1,30" << endl;
        cout << "Bauru com ovo   102     R$ 1,50" << endl;
        cout << "Hamburguer      103     R$ 1,20" << endl;
        cout << "Cheeseburguer   104     R$ 1,30" << endl;
        cout << "Refrigerante    105     R$ 1,00" << endl;

        cout << "\nCodigo do produto que deseja: ";
        cin >> codigo;

        if (codigo == NULL) {
            break;
        }

        if (codigo < 100 || codigo > 105) {
            cout << "Codigo invalido! ";
            continue;
        }
        cout << "Quantidade: ";
        cin >> quantidade;

        if (codigo == 100) {
            quantidadeProduto100 += quantidade;
        } else if (codigo == 101) {
            quantidadeProduto101 += quantidade;
        } else if (codigo == 102) {
            quantidadeProduto102 += quantidade;
        } else if (codigo == 103) {
            quantidadeProduto103 += quantidade;
        } else if (codigo == 104) {
            quantidadeProduto104 += quantidade;
        } else if (codigo == 105) {
            quantidadeProduto105 += quantidade;
        }
        cout << "Deseja continuar? (s/n) ";
        cin >> opcao;
        while (opcao != 's' && opcao != 'n') {
            cout << "Opcao invalida. Deseja continuar? (s/n) ";
            cin >> opcao;
        }
        if (opcao == 'n') {
            break;
        }
    }

    cout << "\n======= PEDIDO TOTAL =======\n";
    cout << "\nCodigo  -  Quantidade  -  Custo unidade  -  Custo total\n\n";
    if (quantidadeProduto100 > 0) {
        subtotal = 1.2 * quantidadeProduto100;
        total += 1.2 * quantidadeProduto100;
        cout << "100\t-\t "<< quantidadeProduto100 << "\t- R$ 1.20\t-" << "   R$ " << fixed << setprecision(2) << subtotal << endl;
    }
    if (quantidadeProduto101 > 0) {
        subtotal = 1.3 * quantidadeProduto101;
        total += 1.3 * quantidadeProduto101;
        cout << "101\t-\t "<< quantidadeProduto101 << "\t- R$ 1.30\t-" << "   R$ " << fixed << setprecision(2) << subtotal << endl;
    }
    if (quantidadeProduto102 > 0) {
        subtotal = 1.5 * quantidadeProduto102;
        total += 1.5 * quantidadeProduto102;
        cout << "102\t-\t "<< quantidadeProduto102 << "\t- R$ 1.50\t-" << "   R$ " << fixed << setprecision(2) << subtotal << endl;
    }
    if (quantidadeProduto103 > 0) {
        subtotal = 1.2 * quantidadeProduto103;
        total += 1.2 * quantidadeProduto103;
        cout << "103\t-\t "<< quantidadeProduto103 << "\t- R$ 1.20\t-" << "   R$ " << fixed << setprecision(2) << subtotal << endl;
    }
    if (quantidadeProduto104 > 0) {
        subtotal = 1.3 * quantidadeProduto104;
        total += 1.3 * quantidadeProduto104;
        cout << "104\t-\t "<< quantidadeProduto104 << "\t- R$ 1.30\t-" << "   R$ " << fixed << setprecision(2) << subtotal << endl;
    }
    if (quantidadeProduto105 > 0) {
        subtotal = 1 * quantidadeProduto105;
        total += 1 * quantidadeProduto105;
        cout << "105\t-\t "<< quantidadeProduto105 << "\t- R$ 1.00\t-" << "   R$ " << fixed << setprecision(2) << subtotal << endl;
    }

    cout << "\nTotal do pedido: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
