/*
44. Em uma eleição presidencial existem quatro candidatos.
Os votos são informados por meio de código. Os códigos utilizados são:

1 , 2, 3, 4  - Votos para os respectivos candidatos
(você deve montar a tabela ex: 1 - Jose/ 2- João/etc)
5 - Voto Nulo
6 - Voto em Branco

Faça um programa que calcule e mostre:

- O total de votos para cada candidato;
- O total de votos nulos;
- O total de votos em branco;
- A percentagem de votos nulos sobre o total de votos;
- A percentagem de votos em branco sobre o total de votos.

Para finalizar o conjunto de votos tem-se o valor zero.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    int contador=0, escolhaVoto, votoFulano=0, votoCiclano=0,
    votoTerciano=0, votoQuatano=0;
    float porcentagemNulo, porcentagemBranco, votoNulo=0, votoBranco=0;

    while (true) {
        system("clear"); // linux
        //system("cls"); // windows
        cout << "------------ VOTACAO 2022 ------------\n";
        cout << "0 - Sair do sistema\n";
        cout << "1 - Fulano\n";
        cout << "2 - Ciclano\n";
        cout << "3 - Terciano\n";
        cout << "4 - Quatano\n";
        cout << "5 - Voto Nulo\n";
        cout << "6 - Voto em Branco\n";

        cout << "\n------------ " << contador+1 << "º candidato" << " ------------\n";
        cout << "Sua opcao: ";
        cin >> escolhaVoto;
        if (escolhaVoto == 0) {
            break;
        }
        contador++;

        while (escolhaVoto < 0 || escolhaVoto > 6) {
            system("clear"); // linux
            //system("cls"); // windows
            cout << "------------ VOTACAO 2022 ------------\n";
            cout << "0 - Sair do sistema\n";
            cout << "1 - Fulano\n";
            cout << "2 - Ciclano\n";
            cout << "3 - Terciano\n";
            cout << "4 - Quatano\n";
            cout << "5 - Voto Nulo\n";
            cout << "6 - Voto em Branco\n";
            cout << "\n------------ " << contador << "º candidato" << " ------------\n";
            cout << "Voto invalido. Tente novamente: ";
            cin >> escolhaVoto;
        }

        if (escolhaVoto == 1) {
            votoFulano++;
        } else if (escolhaVoto == 2) {
            votoCiclano++;
        } else if (escolhaVoto == 3) {
            votoTerciano++;
        } else if (escolhaVoto == 4) {
            votoQuatano++;
        } else if (escolhaVoto == 5) {
            votoNulo++;
        } else if (escolhaVoto == 6) {
            votoBranco++;
        }
    }

    porcentagemNulo = float(votoNulo / contador) * 100;
    porcentagemBranco = float(votoBranco / contador) * 100;

    cout << "\n";

    if (votoFulano > 0) {
        cout << "Votos para Fulano: " << votoFulano << endl;
    }
    if (votoCiclano > 0) {
        cout << "Votos para Ciclano: " << votoCiclano << endl;
    }
    if (votoTerciano > 0) {
        cout << "Votos para Terciano: " << votoTerciano << endl;
    }
    if (votoQuatano > 0) {
        cout << "Votos para Quatano: " << votoQuatano << endl;
    }

    cout << "Votos nulos: " << votoNulo << endl;
    cout << "Votos em branco: " << votoBranco << endl;
    cout << fixed << setprecision(1) << porcentagemNulo << "% de votos nulos em relacao ao total "<< endl;
    cout << fixed << setprecision(1) << porcentagemBranco << "% de votos brancos em relacao ao total "<< endl;

    return 0;
}
