/*
23. A ACME Inc, uma empresa de 500 funcionários, está tendo problemas de espaço em disco
no seu servidor de arquivos. Para tentar resolver este problema, o Administrador de Rede
precisa saber qual o espaço ocupado pelos usuários, e identificar os usuários com maior
espaço ocupado. Através de um programa, baixado da Internet, ele conseguiu gerar o seguinte
arquivo, chamado "usuarios.txt":

    alexandre (456123789 bytes)
    anderson  (1245698456 bytes)
    antonio   (123456456 bytes)
    carlos    (91257581 bytes)
    cesar     (987458 bytes)
    rosemary  (789456125 bytes)

Neste arquivo, o nome do usuário possui 15 caracteres. A partir deste arquivo, você deve criar
um programa que gere um relatório, chamado "relatorio.txt", no seguinte formato:

    ACME        Inc.
    Uso do espaço em disco pelos usuários
    ----------------------------------------------------------
    Nr.     Usuário         Espaço utilizado        % do uso
    1       alexandre       434.99 MB               16.85%
    2       anderson        1187.99 MB              46.02%
    3       antonio         117.73 MB               4.56%
    4       carlos          87.03 MB                3.37%
    5.      cesar           0.94 MB                 0.04%
    6.      rosemary        752.88 MB               29.16%

    Espaço total ocupado: 2581.57 MB
    Espaço médio ocupado: 430.26 MB

O arquivo de entrada deve ser lido uma única vez, e os dados armazenados em memória, caso sejam
necessários, de forma a agilizar a execução do programa. A conversão do espaço ocupado em disco,
de bytes para megabytes deverá ser feita através de uma função separada, que será chamada pelo
programa principal. O cálculo do percentual de uso também deverá ser feito através de uma função,
que será chamada pelo programa principal.
*/

#include <iostream>
#include <iomanip> // import setprecision()
#include <fstream> // para criar arquivos
using namespace std;

int main() {

    char usuarios[6][30] = {"alexandre", "anderson", "antonio",
                    "carlos", "cesar", "rosemary"};
    float espacoOcupadoByte[6] = {456123789.0, 1245698456.0, 123456456.0,
                            91257581.0, 987458.0, 789456125.0};
    float espacoOcupadoMB[6], somaEspacoOcupadoMB=0, percentualOcupadoMB[6];

    for (int i=0; i<6; i++) {
        espacoOcupadoMB[i] = espacoOcupadoByte[i] / 1000000;
        somaEspacoOcupadoMB += espacoOcupadoMB[i];
    }

    /* Saída */
    ofstream relatorioSaida;
    relatorioSaida.open("23_relatorio.txt"); // cria arquivo
    if (relatorioSaida) {
        cout << "Arquivo criado com sucesso!\n\n";
    } else {
        cout << "Nao foi possivel criar o arquivo!";
    }

    relatorioSaida << "ACME \t Inc." << endl;
    relatorioSaida << "Uso do espaço em disco pelos usuários" << endl;
    relatorioSaida << "----------------------------------------------------------" << endl;
    relatorioSaida << "Nr. \tUsuario \t\tEspaco utilizado \t% do uso" << endl;
    for (int i=0; i<6; i++) {
        percentualOcupadoMB[i] = (espacoOcupadoMB[i] / somaEspacoOcupadoMB) * 100;
        if (i >= 2 && i < 5) {
            relatorioSaida << i+1 << "\t" << usuarios[i] << "\t\t\t" << fixed << setprecision(2) << espacoOcupadoMB[i] <<
            " MB \t\t" << setprecision(2) << percentualOcupadoMB[i] << "%" << endl;
        } else {
            relatorioSaida << i+1 << "\t" << usuarios[i] << "\t\t" << fixed << setprecision(2) << espacoOcupadoMB[i] <<
            " MB \t\t" << setprecision(2) << percentualOcupadoMB[i] << "%" << endl;
        }
    }

    relatorioSaida << "\n\nEspaco total ocupado: " << somaEspacoOcupadoMB << " MB" << endl;
    relatorioSaida << "Espaco Medio ocupado: " << somaEspacoOcupadoMB / 6 << " MB" << endl;

    relatorioSaida.close(); // fecha arquivo (libera memoria)

    /* Entrada */
    ifstream relatorioEntrada;
    string linha;
    relatorioEntrada.open("23_relatorio.txt"); // encontra arquivo

    if (relatorioEntrada.is_open()) {
        while(getline(relatorioEntrada, linha)) {
            cout << linha << endl;
        }
        relatorioEntrada.close();
    } else {
        cout << "Não foi possível abrir o arquivo" << endl;
    }

    return 0;
}
