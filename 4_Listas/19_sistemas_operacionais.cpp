/*
19. Uma empresa de pesquisas precisa tabular os resultados de seguinte enquete
feita a uma grande quantidade de organizações:

    "Qual o melhor Sistema Operacional para uso em servidores?"

    As possíveis respostas são:

    1 - Windows Server
    2 - Unix
    3 - Linux
    4 - Netware
    5 - Mac OS
    6 - Outro

Você foi contratado para desenvolver um programa que leia o resultado da enquete
e informe ao final o resultado da mesma. O programa deverá ler os valores até ser
informado o valor 0, que encerra a entrada de dados. Não deverão ser aceitos valores
além dos válidos para o programa (0 a 6). Os valores referentes a cada uma das opções
devem ser armazenados num vetor. Após os dados terem sido completamente informados,
o programa deverá calcular o percentual de cada um dos concorrentes e informar o vencedor
da enquete. O formato da saída foi dado pela empresa, e é o seguinte:

    Sistema Operacional
    Votos               %
    ------------------------
    Windows Server
    1500                17%
    Unix
    3500                40%
    Linux
    3000                34%
    Netware
    500                 5%
    Mac OS
    150                 2%
    Outro
    150                 2%
    ------------------------
    Total: 8800

    O sistema Operacional mais votado foi o Unix, com mais de 3500 votos,
    correspondendo a 40% dos votos.

*/

#include <iostream>
#include <iomanip> // import setprecision()
#include <cmath> // import INFINITY
#include <cstring> // import strcpy()
using namespace std;

void Pergunta();
int opcao, contador=0, maiorVoto;
char sistemas[6][30] = {"Windows Server", "Unix", "Linux",
                        "Netware", "Mac OS", "Outro"};
char sistemaVencedor[30] = "";
int votos[6] = {0, 0, 0, 0, 0, 0};
float percentualVotos[6], maiorPercentual;

int main() {

    while (true) {
        system("clear"); // linux
        //system("cls"); // windows
        Pergunta();
        cout << "-------------------------------------\n";
        cout << contador+1 << "ª pessoa: " << endl;
        cout << "\nSua opcao (0 para sair): ";
        cin >> opcao;
        while (opcao < 0 || opcao > 6) {
            cout << "Opcao invalida. Tente novamente: ";
            cin >> opcao;
        }
        if (opcao == 0) {
            break;
        }
        for (int i=0; i<6; i++) {
            if (opcao == i+1) {
                votos[i]++;
            }
        }
        contador++;
    }

    maiorVoto = -INFINITY;
    maiorPercentual = -INFINITY;

    cout << "\nSistema Operacional" << endl;
    cout << "Votos                   %" << endl;
    cout << "----------------------------" << endl;
    for (int i=0; i<6; i++) {
        percentualVotos[i] = (votos[i] / float(contador)) * 100;
        if (votos[i] > maiorVoto) {
            maiorVoto = votos[i];
            maiorPercentual = percentualVotos[i];
            strcpy(sistemaVencedor,sistemas[i]);
        }
        cout << sistemas[i] << " (" << votos[i] << ")";
        if (sistemas[i] == sistemas[0]) {
            cout << "\t" << fixed << setprecision(0) << percentualVotos[i] << "%" << endl;
        } else {
            cout << "\t\t" << fixed << setprecision(0) << percentualVotos[i] << "%" << endl;
        }
    }
    cout << "----------------------------" << endl;
    cout << "Total: " << contador << " votos" << endl;
    cout << "\nO sistema Operacional mais votado foi o " << sistemaVencedor << ", com mais de " << fixed << setprecision(0) << maiorVoto <<
    " votos, correspondendo a " << maiorPercentual << "% dos votos." << endl;

    return 0;
}

void Pergunta () {
    cout << "Qual o melhor Sistema Operacional para uso em servidores?\n\n";
    for (int i=0; i<6; i++) {
        cout << i+1 << " - " << sistemas[i] << endl;
    }
}
