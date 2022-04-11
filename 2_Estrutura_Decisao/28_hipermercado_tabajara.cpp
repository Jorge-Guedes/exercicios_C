/*
28. O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:

                      Até 5 Kg           Acima de 5 Kg
File Duplo      R$ 4,90 por Kg          R$ 5,80 por Kg
Alcatra         R$ 5,90 por Kg          R$ 6,80 por Kg
Picanha         R$ 6,90 por Kg          R$ 7,80 por Kg

Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção,
porém não há limites para a quantidade de carne por cliente. Se compra for feita no cartão Tabajara
o cliente receberá ainda um desconto de 5% sobre o total da compra. Escreva um programa que peça o tipo e a quantidade
de carne comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra: tipo e quantidade de carne,
preço total, tipo de pagamento, valor do desconto e valor a pagar.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string tipo_carne, tipo_pagamento;
    const char* id_pagamento;
    const char* nome_carne;
    float kg_carne, desconto, total;

    cout << "---- Hipermercado Tabajara ----" << endl;

    cout << "\nTipo de carne: [F - File Duplo, A - Alcatra, P - Picanha]: ";
    cin >> tipo_carne;
    tipo_carne = toupper(tipo_carne[0]);
    cout << "Quantidade de Kg de carne: ";
    cin >> kg_carne;
    cout << "Tipo de pagamento: [C - Cartao (5% desconto), D - Dinheiro] ";
    cin >> tipo_pagamento;
    tipo_pagamento = toupper(tipo_pagamento[0]);

    if (tipo_carne == "F") {
            nome_carne = "File Duplo";
            if (kg_carne > 5) {
                total = 5.8 * kg_carne;
            } else {
                total = 4.9 * kg_carne;
            }
    } else if (tipo_carne == "A") {
            nome_carne = "Alcatra";
            if (kg_carne > 5) {
                total = 6.8 * kg_carne;
            } else {
                total = 5.9 * kg_carne;
            }
    } else if (tipo_carne == "P") {
            nome_carne = "Picanha";
            if (kg_carne > 5) {
                total = 7.8 * kg_carne;
            } else {
                total = 6.9 * kg_carne;
            }
    }

    if (tipo_pagamento == "C") {
        id_pagamento = "Cartao";
        desconto = total * 5/100;
        total = total - desconto;
    } else if (tipo_pagamento == "D") {
        id_pagamento = "Dinheiro";
    } else {
        id_pagamento = "Nao identificado";
    }

    cout << "\n==== Nota Fiscal ==== "<< endl;

    cout << "\nTipo: " << nome_carne << endl;
    cout << "Quantidade: " << kg_carne << " Kg" << endl;
    cout << "Tipo de pagamento: " << id_pagamento << endl;
    cout << "Desconto: R$" << fixed << setprecision(2) << desconto  << endl;
    cout << "Total: R$ " << setprecision(2) << total << endl;

    return 0;
}
