/*
21. Faça um programa que carregue uma lista com os modelos de cinco carros
(exemplo de modelos: FUSCA, GOL, VECTRA etc). Carregue uma outra lista com o consumo
desses carros, isto é, quantos quilômetros cada um desses carros faz com um litro de
combustível. Calcule e mostre:

    a) O modelo do carro mais econômico;
    b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer
    uma distância de 1000 quilômetros e quanto isso custará, considerando que a gasolina custe
    R$ 2,25 o litro.

Abaixo segue uma tela de exemplo. A disposição das informações deve ser a mais próxima possível
ao exemplo. Os dados são fictícios e podem mudar a cada execução do programa.

    Comparativo de Consumo
    Consumo de Combustível

    Veiculo: 1
    Nome: Fusca
    Km por litro: 7

    Veiculo: 2
    Nome: Gol
    Km por litro: 10

    Veiculo: 3
    Nome: Uno
    Km por litro: 12.5

    Veiculo: 4
    Nome: Vectra
    Km por litro: 9

    Veiculo: 5
    Nome: Peugeout
    Km por litro: 14.5

    Relatorio Final

    1 - Fusca - 7.0 - 142.9 litros - R$ 321.43
    2 - Gol - 10.0 - 100.0 litros - R$ 225.00
    3 - Uno - 12.5 - 80.0 litros - R$ 180.00
    4 - Vectra - 9.0 - 111.1 litros - R$ 250.00
    5 - Peugeout - 14.5 - 69.0 litros - R$ 155.17

    O menor consumo é do Peugeout
*/

#include <iostream>
#include <cmath> // import INFINITY
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    string veiculoMenorConsumo;
    float distancia = 1000, custoLitroGasolina = 2.25, menorConsumo;
    char carros[5][20] = {"Fusca", "Gol", "Uno", "Vectra", "Peugeout"};
    float kmLitro[5] = {7, 10, 12.5, 9, 14.5}, litros[5], custoTotal[5];

    menorConsumo = INFINITY;

    cout << "Comparativo de Consumo" << endl;
    cout << "Consumo de Combustivel" << endl;
    cout << "------------------------------------------" << endl;
    for (int i=0; i<5; i++) {
        litros[i] = distancia / kmLitro[i];
        custoTotal[i] = litros[i] * custoLitroGasolina;
        cout << "\nVeiculo: " << i+1 << endl;
        cout << "Nome: " << carros[i] << endl;
        cout << "Km por litro: " << kmLitro[i] << endl;
        if (litros[i] < menorConsumo) {
            menorConsumo = litros[i];
            veiculoMenorConsumo = carros[i];
        }
    }

    cout << "\nRelatorio Final" << endl;
    cout << "------------------------------------------" << endl;
    for (int i=0; i<5; i++) {
        cout << i+1 << " - " << carros[i] << " - " << fixed << setprecision(1) << kmLitro[i] << " - " <<
        litros[i] << " litros - R$" << setprecision(2) << custoTotal[i] << endl;
    }

    cout << "\nO menor consumo eh do " << veiculoMenorConsumo << endl;

    return 0;
}
