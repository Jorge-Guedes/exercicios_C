/*
28. Faça um programa que calcule o valor total investido por um colecionador em sua
coleção de CDs e o valor médio gasto em cada um deles.
O usuário deverá informar a quantidade de CDs e o valor para em cada um.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    int quantidadeCDS;
    float valor, valorTotal, valorMedio;

    cout << "Quantidade de CDs: ";
    cin >> quantidadeCDS;
    cout << "\n";

    for (int i=0; i < quantidadeCDS; i++) {
        cout << "Valor do " << i+1 << "º CD: R$";
        cin >> valor;
        valorTotal += valor;
    }

    valorMedio = valorTotal / quantidadeCDS;
    cout << "\nO valor medio gasto em cada CD eh de R$" << fixed << setprecision(2) << valorMedio << endl;

    return 0;
}
