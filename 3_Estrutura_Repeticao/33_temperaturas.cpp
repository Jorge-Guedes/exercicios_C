/*
33. O Departamento Estadual de Meteorologia lhe contratou para desenvolver um programa
que leia as um conjunto indeterminado de temperaturas, e informe ao final a menor e a maior
temperaturas informadas, bem como a média das temperaturas.
*/

#include <iostream>
#include <cmath> // import INFINITY
using namespace std;

int main() {

    string opcao;
    float temperatura, media, maior, menor, soma=0;
    int contador=0;

    maior = -INFINITY;
    menor = INFINITY;

    while (true) {
        cout << "Digite uma temperatura (ºC): ";
        cin >> temperatura;
        if (temperatura > maior) {
            maior = temperatura;
        }
        if (temperatura < menor) {
            menor = temperatura;
        }
        contador += 1;
        soma += temperatura;
        cout << "Deseja continuar (s/n)? ";
        cin >> opcao;
        opcao = tolower(opcao[0]);
        if (opcao == "n") {
            break;
        }
        while (opcao != "s" && opcao != "n") {
            cout << "Opcao invalida. Deseja continuar (s/n)? ";
            cin >> opcao;
            opcao = tolower(opcao[0]);
        }
    }

    media = soma / contador;
    cout << "\nVoce informou " << contador << " temperaturas." << endl;
    cout << "A media de temperatura eh de " << media << endl;
    cout << "A maior temperatura foi " << maior << "ºC e a menor " << menor << "ºC" << endl;

    return 0;
}
