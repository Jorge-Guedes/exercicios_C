/*
16. Utilize uma lista para resolver o problema a seguir. Uma empresa paga seus vendededores
com base em comissoes. O vendedor recebe $200 por semana mais 9 por cento de suas vendas
brutas daquela semana. Por exemplo, um vendedor que teve vendas brutas e $3000 em uma semana
recebe $200 mais 9 por cento de $3000, ou seja, um total de $470. Escreva um programa
(usando um array de contadores) que determine quantos vendedores receberam salários nos
seguintes intervalos de valores:

    a) $200 - $299
    b) $300 - $399
    c) $400 - $499
    d) $500 - $599
    e) $600 - $699
    f) $700 - $799
    g) $800 - $899
    h) $900 - $999
    i) $1000 em diante

Desafio: Crie uma fórmula para chegar na posição da lista a partir do salário,
sem fazer vários ifs aninhados.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    int valorIntervaloI=200, totalVendedores=0;
    float vendaBruta[100], salarioVendedor[100];
    char intervalos[9][30] = {"$200 - $299", "$300 - $399", "$400 - $499", "$500 - $599", "$600 - $699",
                              "$700 - $799", "$800 - $899", "$900 - $999", "$1000 em diante"};
    int valorIntervalos[17] = {200, 299, 300, 399, 400, 499, 500, 599, 600, 699,
                          700, 799, 800, 899, 900, 999, 1000};

    while (true) {
        cout << "\n" << totalVendedores+1 << "º vendedor: " << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Valor da venda bruta (0 para sair): $";
        cin >> vendaBruta[totalVendedores];
        if (vendaBruta[totalVendedores] == 0) {
            break;
        }
        totalVendedores++;
    }

    cout << "\nTotal de " << totalVendedores << " vendedores!" << endl;

    for (int i=0; i<totalVendedores; i++) {
        salarioVendedor[i] = valorIntervaloI + (vendaBruta[i] * 0.09);
        if (salarioVendedor[i] > valorIntervalos[0] && salarioVendedor[i] < valorIntervalos[1]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[0] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[2] && salarioVendedor[i] < valorIntervalos[3]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[1] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[4] && salarioVendedor[i] < valorIntervalos[5]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[2] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[6] && salarioVendedor[i] < valorIntervalos[7]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[3] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[8] && salarioVendedor[i] < valorIntervalos[9]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[4] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[10] && salarioVendedor[i] < valorIntervalos[11]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[5] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[12] && salarioVendedor[i] < valorIntervalos[13]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[6] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[14] && salarioVendedor[i] < valorIntervalos[15]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[7] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[16] && salarioVendedor[i] < valorIntervalos[17]-1) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[8] << ")" << endl;
        } else if (salarioVendedor[i] > valorIntervalos[17]) {
            cout << "Vendedor " << i+1 << ": " << "$" << fixed << setprecision(2) << salarioVendedor[i] << " - (" << intervalos[9] << ")" << endl;
        }
    }

    return 0;
}
