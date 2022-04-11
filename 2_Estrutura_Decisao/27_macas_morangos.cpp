/*
27. Uma fruteira está vendendo frutas com a seguinte tabela de preços:

                      Até 5 Kg           Acima de 5 Kg
Morango         R$ 2,50 por Kg          R$ 2,20 por Kg
Maçã            R$ 1,80 por Kg          R$ 1,50 por Kg

Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00,
receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg)
de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int desconto;
    float kg_morango, kg_maca, kg_frutas,
    preco_morango, preco_maca, total;

    cout << "---- Fruteira doce ----" << endl;

    cout << "Quantidade de Kg de morango: ";
    cin >> kg_morango;
    cout << "Quantidade de Kg de maca: ";
    cin >> kg_maca;

    if (kg_morango > 5) {
        preco_morango = 2.2 * kg_morango;
    } else {
        preco_morango = 2.5 * kg_morango;
    }

    if (kg_maca > 5) {
        preco_maca = 1.5 * kg_maca;

    } else {
        preco_maca = 1.8 * kg_maca;
    }

    total = preco_morango + preco_maca;
    kg_frutas = kg_morango + kg_maca;

    if (kg_frutas > 8 || total > 25) {
        desconto = 10;
        total = total - total * desconto/100;
    }

    cout << "\nCom " << kg_morango << " Kg de morango";
    cout << " e " << kg_maca << " Kg de maca" << endl;
    cout << "O total a ser pago eh R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
