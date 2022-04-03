/*
14. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar
o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes
maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos)
deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um
programa que leia a variável peso (peso de peixes) e calcule o excesso.
Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa
que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
*/

#include <iostream>
using namespace std;

int main() {

    float peso_peixes, excesso, valor_multa;
    cout << "Peso total dos peixes (KG): ";
    cin >> peso_peixes;
    cout << "\n";

    if (peso_peixes > 50) {
        excesso = peso_peixes - 50;
        valor_multa = excesso * 4;
        cout << "O peixe de Joao possui um peso de " << excesso << "Kg em excesso" << "\n";
        cout << "Sua multa foi de: " << "R$" << valor_multa << endl;
    } else {
        cout << "O peixe de Joao possui um peso de " << peso_peixes << "Kg" << "\n";
        cout << "Joao não recebeu multa." << endl;
    }

    return 0;
}
