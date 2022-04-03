/*
16. Faça um programa para uma loja de tintas. O programa deverá pedir
o tamanho em metros quadrados da área a ser pintada. Considere que
a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que
a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
*/

#include <iostream>
#include <math.h> // import ceil()
#include <iomanip> // importar setprecision()
using namespace std;

int main() {
    float tamanho, rendimento=3, litrosLata=18,
    precoLata=80, precoTotal=0, litros;
    int quantidadeLatasTinta;

    cout << "Tamanho da area a ser pintada [em m³]: ";
    cin >> tamanho;

    litros = tamanho / 3;
    quantidadeLatasTinta = ceil(tamanho / (rendimento * litrosLata));

    precoTotal = quantidadeLatasTinta * 80;
    cout << "\nQuantidade de litros de tinta necessarios: " << fixed << setprecision(2) << litros << "L";
    cout << "\nVoce precisara de " << setprecision(0) << quantidadeLatasTinta << " latas de tinta";
    cout << "\nO valor total a ser pago eh de R$" << setprecision(2) << precoTotal << endl;

    return 0;
}
