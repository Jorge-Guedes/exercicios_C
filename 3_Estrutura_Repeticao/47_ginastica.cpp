/*
47. Em uma competição de ginástica, cada atleta recebe votos de sete jurados. A melhor e a pior nota são eliminadas.
A sua nota fica sendo a média dos votos restantes. Você deve fazer um programa que receba o nome do ginasta e as
notas dos sete jurados alcançadas pelo atleta em sua apresentação e depois informe a sua média, conforme a descrição
acima informada (retirar o melhor e o pior salto e depois calcular a média com as notas restantes).
As notas não são informados ordenadas. Um exemplo de saída do programa deve ser conforme o exemplo abaixo:

    Atleta: Aparecido Parente
    Nota: 9.9
    Nota: 7.5
    Nota: 9.5
    Nota: 8.5
    Nota: 9.0
    Nota: 8.5
    Nota: 9.7

    Resultado final:
    Atleta: Aparecido Parente
    Melhor nota: 9.9
    Pior nota: 7.5
    Média: 9,04
*/

#include <iostream>
#include <string.h>
#include <cmath> // import INFINITY
#include <iomanip> // import setprecision()
//#include <cstring> // import getline()
using namespace std;

int main() {

    int contador=0, numeroJurados=7;
    string nome;
    float notas[numeroJurados], maiorNota, menorNota, somaNotas=0, mediaNotas;

    maiorNota = -INFINITY;
	menorNota = INFINITY;

    while (true) {
        contador++;
        cout << "\n\n" << contador << "º ATLETA" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Nome do atleta (0 para encerrar): ";
        std::cin.ignore();
        std::getline(cin, nome);

        if (nome == "0") {
            break;
        }
        cout << "\n";

        for (int i=0; i<numeroJurados; i++) {
            cout << i+1 << "º Nota: ";
            cin >> notas[i];
            if (notas[i] > maiorNota) {
                maiorNota = notas[i];
            }
            if (notas[i] < menorNota) {
                menorNota = notas[i];
            }
            somaNotas += notas[i];
        }
        mediaNotas = somaNotas / numeroJurados;
        cout << "\nResultado final:" << endl;
        cout << "Atleta: " << nome << endl;
        cout << "Melhor nota: " << maiorNota << endl;
        cout << "Pior nota: " << menorNota << endl;
        cout << "Media: " << fixed << setprecision(1) << mediaNotas << endl;
        maiorNota=-INFINITY; menorNota=INFINITY; somaNotas=0; mediaNotas=0;
    }

    return 0;
}
