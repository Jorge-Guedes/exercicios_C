/*
46. Em uma competição de salto em distância cada atleta tem direito a cinco saltos. No final da série de saltos
de cada atleta, o melhor e o pior resultados são eliminados. O seu resultado fica sendo a média dos três valores
restantes. Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas pelo atleta em seus saltos
e depois informe a média dos saltos conforme a descrição acima informada (retirar o melhor e o pior salto e depois
calcular a média). Faça uso de uma lista para armazenar os saltos. Os saltos são informados na ordem da execução,
portanto não são ordenados. O programa deve ser encerrado quando não for informado o nome do atleta.
A saída do programa deve ser conforme o exemplo abaixo:

    Atleta: Rodrigo Curvêllo

    Primeiro Salto: 6.5 m
    Segundo Salto: 6.1 m
    Terceiro Salto: 6.2 m
    Quarto Salto: 5.4 m
    Quinto Salto: 5.3 m

    Melhor salto:  6.5 m
    Pior salto: 5.3 m
    Média dos demais saltos: 5.9 m

    Resultado final:
    Rodrigo Curvêllo: 5.9 m
*/

#include <iostream>
#include <string.h>
#include <cmath> // import INFINITY
using namespace std;

int main() {

    int contador=0;
    string nome, vencedor;
    float saltos[5], maiorSalto, menorSalto, somaSalto=0, mediaSolta;

    maiorSalto = -INFINITY;
	menorSalto = INFINITY;

    while (true) {
        contador++;
        cout << "\n\n\n" << contador << "º ATLETA" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Nome do atleta (0 para encerrar): ";
        cin >> nome;

        if (nome == "0") {
            break;
        }

        cout << "\n";

        for (int i=0; i<5; i++) {
            cout << i+1 << "º Salto: ";
            cin >> saltos[i];
            if (saltos[i] > maiorSalto) {
                maiorSalto = saltos[i];
                vencedor = nome;
            }
            if (saltos[i] < menorSalto) {
                menorSalto = saltos[i];
            }
            somaSalto++;
        }
        mediaSolta = somaSalto / 5;
        cout << "\nMelhor salto: " << maiorSalto << " m" << endl;
        cout << "Pior salto: " << menorSalto << " m" << endl;
        cout << "Media dos demais saltos: " << menorSalto << " m" << endl;
    }

    cout << "\nResultado final:" << endl;
    cout << "VENCEDOR - " << vencedor << ": " << maiorSalto << " m" << endl;

    return 0;
}
