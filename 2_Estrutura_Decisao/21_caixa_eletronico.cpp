/*
21. Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do
saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão
as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais.
O programa não deve se preocupar com a quantidade de notas existentes na máquina.

    a) Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100,
    uma nota de 50, uma nota de 5 e uma nota de 1;
    b) Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100,
    uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/

#include <iostream>
using namespace std;

int main() {

    int valor_saque, cem, cinquenta, dez, cinco, um;

    cout << "\n============== Banco PIX ==============" << endl;
    cout << "\nValor do saque (R$10 a R$600): R$";
    cin >> valor_saque;

    if (valor_saque < 10 || valor_saque > 600) {
        cout << "Valor invalido!" << endl;
    } else {
        cem = valor_saque / 100;
        valor_saque -= cem * 100;
        cinquenta = valor_saque / 50;
        valor_saque -= cinquenta * 50;
        dez = valor_saque / 10;
        valor_saque -= dez * 10;
        cinco = valor_saque / 5;
        valor_saque -= dez * 5;
        um = valor_saque;
        cout << "\n";

        if (cem > 0) {
            cout << cem << " nota(s) de cem" << endl;
        }
        if (cinquenta > 0) {
            cout << cinquenta << " nota(s) de cinquenta" << endl;
        }
        if (dez > 0) {
            cout << dez << " nota(s) de dez" << endl;
        }
        if (cinco > 0) {
            cout << cinco << " nota(s) de cinco" << endl;
        }
        if (um > 0) {
            cout << um << " nota(s) de um" << endl;
        }

    }

    cout << "\nVolte sempre ao BANCO PIX!" << endl;

    return 0;
}
