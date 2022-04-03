/*
14. Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar
o rendimento di�rio de seu trabalho. Toda vez que ele traz um peso de peixes
maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (50 quilos)
deve pagar uma multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a um
programa que leia a vari�vel peso (peso de peixes) e calcule o excesso.
Gravar na vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel multa o valor da multa
que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.
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
        cout << "Joao n�o recebeu multa." << endl;
    }

    return 0;
}
