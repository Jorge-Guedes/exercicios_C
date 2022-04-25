/*
13. Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista.
Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual,
se em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).
*/

#include <iostream>
using namespace std;

int main() {

    char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    float temperaturas[12];
    float soma_temperaturas=0, media_temperaturas = 0;

    for (int i=0; i<12; i++) {
        cout << "Temperatura do mes de " << meses[i] << ": ";
        cin >> temperaturas[i];
        soma_temperaturas += temperaturas[i];
    }
    media_temperaturas = soma_temperaturas / 12;

    cout << "\n\nTemperaturas acima da media anual de " << media_temperaturas << "ºC: " << endl;
    cout << "---------------------------------------------" << endl;
    for (int i=0; i<12; i++) {
        if (temperaturas[i] > media_temperaturas) {
            cout << meses[i] << ": " << temperaturas[i] << "ºC" << endl;
        }
    }

    return 0;
}
