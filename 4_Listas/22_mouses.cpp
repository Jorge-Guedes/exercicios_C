/*
22. Sua organização acaba de contratar um estagiário para trabalhar no Suporte de Informática,
com a intenção de fazer um levantamento nas sucatas encontradas nesta área. A primeira tarefa dele
é testar todos os cerca de 200 mouses que se encontram lá, testando e anotando o estado de cada um
deles, para verificar o que se pode aproveitar deles.

Foi requisitado que você desenvolva um programa para registrar este levantamento.
O programa deverá receber um número indeterminado de entradas, cada uma contendo:
    a) Um número de identificação do mouse;
    b) O tipo de defeito: (necessita da esfera, necessita de limpeza, necessita troca do
    cabo ou conector quebrado ou inutilizado);
    c) Uma identificação igual a zero encerra o programa.

Ao final o programa deverá emitir o seguinte relatório:

    Quantidade de mouses: 100

    Situação                                    Quantidade Percentual
    1 - necessita da esfera                     40%
    2 - necessita de limpeza                    30%
    3 - necessita troca do cabo ou conector     15%
    4 - quebrado ou inutilizado                 15%
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    int quantidadeMouses=0, opcao;
    char estado[4][50] = {"necessita da esfera", "necessita de limpeza",
                          "necessita troca do cabo ou conector", "quebrado ou inutilizado"};
    int idEstado[4] = {1,2,3,4}, quantidadeEstado[4];
    float quantidadePercentual[4];

    for (int i=0; i<4; i++) {
        quantidadeEstado[i] = 0;
    }

    while (true) {
        system("clear"); // linux
        //system("cls"); // windows
        cout << quantidadeMouses+1 << "º Mouse" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "Tipo de defeito: " << endl;
        for (int i=0; i<4; i++) {
            cout << i+1 << " - " << estado[i] << endl;
            if (opcao == idEstado[i]) {
                ++quantidadeEstado[i];
            }
        }
        cout << "\nSua opcao: ";
        cin >> opcao;
        while (opcao < 0 || opcao > 4) {
            cout << "Opcao invalida. Digite de 1 a 4: ";
            cin >> opcao;
        }
        if (opcao == 0) {
            break;
        }
        ++quantidadeMouses;
    }

    cout <<"\nQuantidade de mouses: " << quantidadeMouses << endl;

    cout << "\nSituacao \t\t\t\t\tQuantidade Percentual" << endl;
    for (int i=0; i<4; i++) {
        quantidadePercentual[i] = (float(quantidadeEstado[i]) / float(quantidadeMouses)) * 100;
        if (i == 0) {
            cout << i+1 << " - " << estado[i] << "\t\t\t\t" << quantidadePercentual[i] << "%" << endl;
        } else if (i == 2) {
            cout << i+1 << " - " << estado[i] << "\t\t" << quantidadePercentual[i] << "%" << endl;
        } else {
            cout << i+1 << " - " << estado[i] << "\t\t\t" << quantidadePercentual[i] << "%" << endl;
        }
    }

    return 0;
}
