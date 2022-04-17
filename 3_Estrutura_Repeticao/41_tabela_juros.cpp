/*
41. Faca um programa que receba o valor de uma divida e mostre uma tabela com
os seguintes dados: valor da divida, valor dos juros, quantidade de parcelas e valor da parcela.

Os juros e a quantidade de parcelas seguem a tabela abaixo:

Quantidade de Parcelas  % de Juros sobre o valor inicial da divida
1       0
3       10
6       15
9       20
12      25

Exemplo de saida do programa:

Valor da divida Valor dos Juros Quantidade de Parcelas  Valor da Parcela
R$ 1.000,00     0               1                       R$  1.000,00
R$ 1.100,00     100             3                       R$    366,00
R$ 1.150,00     150             6                       R$    191,67
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int parcelas=1;
	float valorDivida, valorJuros, valorParcela, taxaJuros, valorTotal;

	cout << "Valor da divida: R$ ";
	cin >> valorDivida;

    cout << "\nValor da divida Valor dos Juros Quantidade de Parcelas  Valor da Parcela\n";

    while (true) {
        taxaJuros = (5 / 3) * parcelas + 5;
        if (parcelas == 1) {
            taxaJuros = 0;
        }
        valorJuros = valorDivida * (taxaJuros / 100);
        valorTotal = valorDivida + valorJuros;
        valorParcela = valorTotal / parcelas;

        cout << "\n";
        cout << "R$ " << fixed << setprecision(2) << valorDivida << "\t\t";
        cout << "R$ " << fixed << setprecision(2) << valorJuros << "\t\t";
        cout << parcelas << "\t\t\t";
        cout << "R$ " << fixed << setprecision(2) << valorParcela << "\t";

        if (parcelas == 1) {
            parcelas--;
        }
        parcelas += 3;
        if (parcelas > 12) {
            break;
        }
    }

    cout << "\n\n";

    return 0;
}

