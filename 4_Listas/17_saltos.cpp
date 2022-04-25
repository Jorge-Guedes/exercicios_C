/*
17. Em uma competição de salto em distância cada atleta tem direito a cinco saltos.
O resultado do atleta será determinado pela média dos cinco valores restantes.
Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas
pelo atleta em seus saltos e depois informe o nome, os saltos e a média dos saltos.

O programa deve ser encerrado quando não for informado o nome do atleta.
A saída do programa deve ser conforme o exemplo abaixo:

    Atleta:             Rodrigo Curvêllo
    Primeiro Salto:     6.5m
    Segundo Salto:      6.1m
    Terceiro Salto:     6.2m
    Quarto Salto:       5.4m
    Quinto Salto:       5.3m

    Resultado final:

    Atleta:             Rodrigo Curvêllo
    Saltos: 6.5 - 6.1 - 6.2 - 5.4 - 5.3
    Média dos saltos: 5.9m

*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    int quantidadeSaltos=5, quantidadeAtletas=0;
    float somaSaltos, mediaSaltos, saltos[quantidadeSaltos];
    string nomeAtleta;

    while (true) {
        cout << "\n\n" << quantidadeAtletas+1 << "º Atleta (0 para sair): ";
        cin >> nomeAtleta;
        if (nomeAtleta == "0") {
            break;
        }
        quantidadeAtletas++;
        cout << "--------------------------------------------" << endl;
        for (int i=0; i<quantidadeSaltos; i++) {
            cout << i+1 << "º Salto: ";
            cin >> saltos[i];
            somaSaltos += saltos[i];
        }
        mediaSaltos = somaSaltos / quantidadeSaltos;
        cout << "\nResultado final: " << endl;
        cout << "\nAtleta: " << nomeAtleta << endl;
        cout << "Saltos: ";
        for (int i=0; i<quantidadeSaltos; i++) {
            cout << saltos[i];
            (saltos[i] == quantidadeSaltos) ? cout << "" : cout << " - ";
        }
        cout << "\nMedia dos saltos: " << fixed << setprecision(1) << mediaSaltos << "m" << endl;
        somaSaltos=0, mediaSaltos=0;
    }

    return 0;
}
