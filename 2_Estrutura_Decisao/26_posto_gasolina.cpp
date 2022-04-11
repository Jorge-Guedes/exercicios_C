/*
26. Um posto está vendendo combustíveis com a seguinte tabela de descontos:

    a) Álcool:
    b) até 20 litros, desconto de 3% por litro
    c) acima de 20 litros, desconto de 5% por litro
    d) Gasolina:
    e) até 20 litros, desconto de 4% por litro
    f) acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago
pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float litros, desconto, preco_litro, total, total_com_desconto;
    string combustivel;

    cout << "------ Posto Gasolinaz ------" << endl;
    cout << "\nQuantidade de litros para abastecer: ";
    cin >> litros;
    cout << "Tipo de combustivel (A - Alcool ou G - Gasolina): ";
    cin >> combustivel;
    combustivel = toupper(combustivel[0]);

    if (combustivel != "A" && combustivel != "G") {
        cout << "Opcao de combustivel invalida!" << endl;
    } else {

        if (combustivel == "A") {
            if (litros < 20) {
                desconto = 3;
            } else {
                desconto = 5;
            }
            preco_litro = 1.9;
        }
        if (combustivel == "G") {
            if (litros < 20) {
                desconto = 4;
            } else {
                desconto = 6;
            }
            preco_litro = 2.5;
        }

        total = litros * preco_litro;
        total_com_desconto = total - (total * desconto/100);
        cout << "\nO valor total a ser pago eh de R$ " << fixed << setprecision(2) << total_com_desconto << endl;
    }

    return 0;
}
